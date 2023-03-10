#pragma once

#include <vector>

template<typename T>
int partion(std::vector<T> &vec, int left , int right)
{
	int index = left;
	int pivot = vec[left];

	for (int i = left + 1; i <= right; i++)
	{
		if (vec[i] < pivot)
		{
			index++;
			std::swap(vec[i], vec[index]);
		}
	}
	std::swap(vec[left], vec[index]);
	return index;
}

template<typename T>
void quicksort(std::vector<T> &vec, int left, int right)
{
	if (left >= right)
		return;

	int pivot = partion(vec, left, right);
	quicksort(vec, left, pivot - 1);
	quicksort(vec, pivot + 1, right);
}