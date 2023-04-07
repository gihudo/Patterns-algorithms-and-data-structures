#pragma once

#include <vector>

template<typename T>
bool isSorted(std::vector<T>& vec)
{
	for (int i = 1; i < vec.size(); i++)
		if (vec[i] < vec[i - 1])
			return false;
	return true;
}

template<typename T>
void shuffle(std::vector<T>& vec)
{
	for (int i = 0; i < vec.size(); i++)
		std::swap(vec[i], vec[rand() % vec.size()]);
}

template<typename T>
void bogosort(std::vector<T>& vec)
{
	while (!isSorted(vec))
		shuffle(vec);
}