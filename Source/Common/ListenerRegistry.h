
#pragma once
#include <memory>
#include <vector>
#include <algorithm>

#include "ListenerHandle.h"

template<class T>
class CListenerRegistry {
public:

	IListenerHandle AddListener(T& listener) {
		auto ptr = std::make_shared<CListenerHandle>([&] {
			UnregisterListeners();
		});
		
		mListeners.emplace_back(listener,ptr);
		return ptr;
	}


private:

	template<class T>
	class CListenerHandleSpec  {
	public:
		CListenerHandleSpec() {}
		CListenerHandleSpec(T& listener, std::weak_ptr<CListenerHandle> self) : mListener(&listener), mSelf(self) {}
		virtual ~CListenerHandleSpec() {}
		
		T* operator->() {
			return mListener;
		}
		
		bool IsExpired() const { return mSelf.expired(); }
	private:
		T * mListener;
		std::weak_ptr<CListenerHandle> mSelf;
		
	};
	
	void UnregisterListeners() {
		mListeners.erase(std::remove_if(mListeners.begin(), mListeners.end(), [](const CListenerHandleSpec<T>& listener) {
			return listener.IsExpired();
		}), mListeners.end());
	}
	std::vector<CListenerHandleSpec<T>> mListeners;

protected:
	std::vector<CListenerHandleSpec<T>>& GetListeners() {
		return mListeners;
	}

};