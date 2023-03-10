#pragma once

#include <vector>

template<typename T>
int linear_search(const std::vector<T>& vec, T value)
{
	for (int i = 0; i < vec.size(); i++)
		if (vec[i] == value)
			return i;
	return -1;
}