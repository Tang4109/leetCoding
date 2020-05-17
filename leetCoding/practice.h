#pragma once
#include <vector>
using namespace std;

class Solution
{
public:
	void bubbleSort(vector<int>& nums)
	{
		int len = nums.size();
		bool haschange = true;
		for (int i = 0; i < len - 1 && haschange; i++)
		{
			haschange = false;
			for (int j = 0; j < len - 1-i; j++)
				if (nums[j] > nums[j+1])
				{
					swap(nums[j], nums[j + 1]);
					haschange = true;
				}
		}
	}
};
