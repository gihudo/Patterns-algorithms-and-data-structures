#include <algorithm>
#include <vector>

void countingsort(std::vector<int>& vec)
{
	int max = *std::max_element(vec.begin(), vec.end());
	int min = *std::min_element(vec.begin(), vec.end());
	int range = max - min + 1;

	std::vector<int> count_vec(range);
	std::vector<int> sorted_vec(vec.size());

	for (int i = 0; i < vec.size(); i++)
		count_vec[vec[i] - min]++;

	for (int i = 1; i < range; i++)
		count_vec[i] += count_vec[i - 1];

	for (int i = 0; i < vec.size(); i++)
	{
		sorted_vec[count_vec[vec[i] - min] - 1] = vec[i];
		count_vec[vec[i] - min]--;
	}

	for (int i = 0; i < vec.size(); i++)
		vec[i] = sorted_vec[i];
}