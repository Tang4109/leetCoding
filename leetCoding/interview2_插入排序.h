#pragma once

template <typename T>
class insertSort
{
private:
	int current;
	int j;
public:
	insertSort(std::vector<T>& nums)
	{
		for (int i = 1; i < nums.size(); i++)
		{
			current = nums[i];
			for (j = i - 1; j >= 0 && nums[j] > current; j--)
			{
				//后移
				nums[j + 1] = nums[j];
			}
			//j+1是因为for循环最后j--了
			nums[j + 1] = current;
		}
	}
};
