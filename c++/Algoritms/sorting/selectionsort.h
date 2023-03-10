#pragma once

#include <vector>

template<typename T>
void selectionsort(std::vector<T>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		int iMin = i;
		for (int j = i + 1; j < vec.size(); j++)
		{
			if (vec[iMin] > vec[j])
				iMin = j;
		}
		std::swap(vec[i], vec[iMin]);
	}
}