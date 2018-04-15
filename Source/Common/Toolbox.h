#pragma once

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
}