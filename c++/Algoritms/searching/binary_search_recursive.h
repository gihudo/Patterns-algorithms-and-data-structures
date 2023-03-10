#pragma once

#include <vector>

template<typename T>
int binary_search_recursive(const std::vector<T>& vec, T value, int left, int right)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (vec[mid] == value)
			return mid;

		if (vec[mid] > value)
			return binary_search_recursive(vec, value, left, mid - 1);
		return binary_search_recursive(vec, value, mid + 1, right);
	}
	return -1;
}