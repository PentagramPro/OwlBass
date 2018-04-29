#pragma once
#include <functional>
#include <memory>


class CListenerHandle {
public:
	CListenerHandle() {}
	CListenerHandle(const std::function<void()>& onDelete) : mOnDelete(onDelete) {}
	virtual ~CListenerHandle() {
		mOnDelete();
	}
private:
	std::function<void()> mOnDelete;
};

using IListenerHandle = std::shared_ptr<CListenerHandle>;
