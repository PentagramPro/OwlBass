#pragma once
#include <string>


namespace Toolbox {
	template<typename T> 
	constexpr  const T& clamp(const T& v, const T& lo, const T& hi) {
		if (v > hi) {
			return hi;
		}
		else if (v < lo) {
			return lo;
		}
		else {
			return v;
		}
	}


	/*
	template<class Key, class V, class Compare = std::less<Key>,
		template <typename T> class Allocator = allocator>
	std::vector<Key> MapKeysToVector(const std::unordered_map<Key, V, Compare, Allocator<std::pair<const Key, V>>& map) {
		std::set<Key> result;

		for (const auto& item : map) {
			result.insert(item->first);
		}

		return std::vector<Key>(result);
	}*/
}