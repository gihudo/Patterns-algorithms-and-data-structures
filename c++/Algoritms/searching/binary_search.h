#pragma once

#include <vector>

template<typename T>
int binary_search(const std::vector<T>& vec, T value)
{
	int left = 0;
	int right = vec.size() - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (vec[mid] == value)
			return mid;

		if (vec[mid] > value)
			right = mid - 1;
		else left = mid + 1;
	}

	return -1;
}