#pragma once

template<typename T>
int partion(T arr[], int left , int right)
{
	int index = left;
	int pivot = arr[left];

	for (int i = left + 1; i <= right; i++)
	{
		if (arr[i] < pivot)
		{
			index++;
			std::swap(arr[i], arr[index]);
		}
	}
	std::swap(arr[left], arr[index]);
	return index;
}

template<typename T>
void quicksort(T arr[], int left, int right)
{
	if (left >= right)
		return;

	int pivot = partion(arr, left, right);
	quicksort(arr, left, pivot - 1);
	quicksort(arr, pivot + 1, right);
}