#pragma once
#include <vector>

template<typename T>
class Solution
{
private:
	bool haschange=true;

public:
	void bubbleSort(std::vector<T>& nums)
	{
		for (int i = 0; i < nums.size() - 1 && haschange; i++)
		{
			haschange = false;
			for (int j = 0; j < nums.size() - 1 - i; j++)
			{
				if (nums[j] > nums[j + 1])
				{
					std::swap(nums[j], nums[j + 1]);
					haschange = true;
				}
			}
		}
	}

	void bubbleSort2(std::vector<T>& nums)
	{
		int len = nums.size();
		bool swaped;
		do
		{
			swaped = false;
			for(int i=1;i<len;i++)
			{
				if(nums[i-1]>nums[i])
				{
					std::swap(nums[i-1], nums[i]);
					swaped = true;
				}
			}
			len--;
			
		} while (swaped);
		
		
	}
};
