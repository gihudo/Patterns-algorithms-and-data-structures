#pragma once

template<typename T>
void selectionsort(T arr[], unsigned int size)
{
	for (int i = 0; i < size; i++)
	{
		int iMin = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[iMin] > arr[j])
				iMin = j;
		}
		std::swap(arr[i], arr[iMin]);
	}
}