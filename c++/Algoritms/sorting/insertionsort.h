#pragma once

#include <vector>

template<typename T>
void insertionsort(std::vector<T> &vec)
{
	for (int i = 1; i < vec.size(); i++)
	{
		for (int j = i; j > 0 && vec[j] < vec[j - 1]; j--)
			std::swap(vec[j], vec[j - 1]);
	}
}