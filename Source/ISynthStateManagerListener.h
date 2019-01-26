#pragma once


class ISynthStateManagerListener {
public:
	virtual ~ISynthStateManagerListener() {}

	virtual void OnNameAndCategoryChanged() {};
};