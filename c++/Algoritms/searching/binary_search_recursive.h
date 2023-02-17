#pragma once

template<typename T>
int binary_search_recursive(const T arr[], T value, int left, int right)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] == value)
			return mid;

		if (arr[mid] > value)
			return binary_search_recursive(arr, value, left, mid - 1);
		return binary_search_recursive(arr, value, mid + 1, right);
	}
	return -1;
}