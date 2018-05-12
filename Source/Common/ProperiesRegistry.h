#pragma once
#include <string>
#include <unordered_map>
#include <memory>
#include "../JuceLibraryCode/JuceHeader.h"
#include "ListenerRegistry.h"
#include "Toolbox.h"
#include <functional>

class CSynthState;

class IPropertyRecord {
public:
	virtual void SetReference(float value) = 0;
	virtual float GetFromReference() = 0;
	virtual void SetRaw(double value) = 0;
	virtual double GetRaw() const = 0;
};

template<typename T>
class SPropertyRecord : public IPropertyRecord {
public:
	T& mReference;
	T mMaxValue;
	T mMinValue;
	std::function<T(float)> mFunction;
	std::function<float(T)> mInvertedFunction;
	SPropertyRecord(T& ref, T min, T max) : mReference(ref), mMinValue(min), mMaxValue(max), mFunction([](float x) {return (T)x; })
		, mInvertedFunction([](T x) { return (float)x;	}) {}
	SPropertyRecord(T& ref, T min, T max, std::function<T(float)> function, std::function<float(T)> invertedFunction)
		: mReference(ref), mMinValue(min), mMaxValue(max), mFunction(function), mInvertedFunction(invertedFunction) {	}

	void SetReference(float value) override {
		const T convertedVal = mFunction(value);
		SetReferenceInternal(convertedVal);
	}

	float GetFromReference() {
		T res = GetFromReferenceInternal(mReference);
		return mInvertedFunction(res);
	}
private:
	void SetReferenceInternal(double convertedVal) {
		convertedVal = Toolbox::clamp(convertedVal, 0.0, 1.0);
		mReference =mMinValue + (mMaxValue - mMinValue)*convertedVal;
	}
	void SetReferenceInternal(int convertedVal) {
		convertedVal = Toolbox::clamp(convertedVal, mMinValue, mMaxValue);
		mReference = convertedVal;
	}
	double GetFromReferenceInternal(double refVal) {
		return (refVal - mMinValue) / (mMaxValue - mMinValue);
	}
	int GetFromReferenceInternal(int refVal) {
		return refVal;
	}

	virtual void SetRaw(double value) override
	{
		mReference = (T)value;
	}

	virtual double GetRaw() const override
	{
		return (double)mReference;
	}

};

class IPropertiesRegistryListener {
public:
	virtual void OnPropertiesFromSynthState() = 0;
};

class CPropertiesRegistry : public CListenerRegistry<IPropertiesRegistryListener> {
public:

	void SetProperty(const std::string& name, float value);

	void FromSynthState(const CSynthState& state);
	void ToSynthState(CSynthState& state);

	
	float GetPropertyValueFromReference(const std::string& name) const {
		auto p = mProperties.find(name);
		if (p != mProperties.end()) {
			return p->second->GetFromReference();
		}
		return 0;
	}

	template<typename T>
	void AddProperty(const std::string & name, T & propRef, T minValue, T maxValue, std::function<T(float)> function, std::function<float(T)> invertedFunction)
	{
		mProperties[name] = std::unique_ptr<SPropertyRecord<T>>(new SPropertyRecord<T>(propRef, minValue, maxValue, function, invertedFunction));
	}
	template<typename T>
	void AddProperty(const std::string & name, T & propRef, T minValue, T maxValue)
	{
		mProperties[name] = std::unique_ptr<SPropertyRecord<T>>(new SPropertyRecord<T>(propRef, minValue, maxValue));
	}


	bool HasProperty(const std::string & name) const;
private:
	std::unordered_map<std::string, std::unique_ptr<IPropertyRecord>> mProperties;
};