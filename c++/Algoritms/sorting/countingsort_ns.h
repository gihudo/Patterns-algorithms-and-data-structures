#pragma once

#include <algorithm>

void countingsort(int arr[], unsigned int size)
{
	int max = *std::max_element(arr, arr + size);
	int min = *std::min_element(arr, arr + size);
	int range = max - min + 1;

	int* count_arr = new int[range] {0};
	int* sorted_arr = new int[size] {0};

	for (int i = 0; i < size; i++)
		count_arr[arr[i] - min]++;

	for (int i = 1; i < range; i++)
		count_arr[i] += count_arr[i - 1];

	for (int i = 0; i < size; i++)
	{
		sorted_arr[count_arr[arr[i] - min] - 1] = arr[i];
		count_arr[arr[i] - min]--;
	}

	for (int i = 0; i < size; i++)
		arr[i] = sorted_arr[i];
}