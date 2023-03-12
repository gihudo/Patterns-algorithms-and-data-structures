#pragma once

#include <vector>

template<typename T>
void merge(std::vector<T>& vec, int left, int mid, int right)
{
	std::vector<T> left_vec(mid - left + 1);
	std::vector<T> right_vec(right - mid);

	for (int i = 0; i < left_vec.size(); i++)
		left_vec[i] = vec[left + i];
	for (int i = 0; i < right_vec.size(); i++)
		right_vec[i] = vec[mid + i + 1];

	int indexOfLeftVec = 0;
	int indexOfRightVec = 0;
	int indexOfMergedVec = left;

	while (indexOfLeftVec < left_vec.size() && indexOfRightVec < right_vec.size())
	{
		if (left_vec[indexOfLeftVec] <= right_vec[indexOfRightVec])
		{
			vec[indexOfMergedVec] = left_vec[indexOfLeftVec];
			indexOfLeftVec++;
		}
		else
		{
			vec[indexOfMergedVec] = right_vec[indexOfRightVec];
			indexOfRightVec++;
		}
		indexOfMergedVec++;
	}

	while (indexOfLeftVec < left_vec.size())
	{
		vec[indexOfMergedVec] = left_vec[indexOfLeftVec];
		indexOfLeftVec++;
		indexOfMergedVec++;
	}

	while (indexOfRightVec < right_vec.size())
	{
		vec[indexOfMergedVec] = right_vec[indexOfRightVec];
		indexOfRightVec++;
		indexOfMergedVec++;
	}
}

template<typename T>
void mergesort(std::vector<T>& vec, int left, int right)
{
	if (left >= right)
		return;

	int mid = left + (right - left) / 2;
	mergesort(vec, left, mid);
	mergesort(vec, mid + 1, right);

	merge(vec, left, mid, right);
}