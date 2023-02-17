#pragma once

template<typename T>
int binary_search(const T arr[], T value, unsigned int size)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] == value)
			return mid;

		if (arr[mid] > value)
			right = mid - 1;
		else left = mid + 1;
	}
	return -1;
}