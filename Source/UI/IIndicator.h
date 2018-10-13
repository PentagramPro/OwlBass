#pragma once
class CPropertiesRegistry;

class IIndicator {
public:
	virtual void SetPropertiesRegistry(CPropertiesRegistry& properties) = 0;
};