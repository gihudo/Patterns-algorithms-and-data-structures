#pragma once

#include <vector>

template<typename T>
void bubblesort(std::vector<T>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec.size() - i - 1; j++)
		{
			if (vec[j] > vec[j + 1])
				std::swap(vec[j], vec[j + 1]);
		}
	}
}