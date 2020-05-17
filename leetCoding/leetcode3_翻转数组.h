#pragma once
#include <vector>

class Solution
{
public:
	void rotate(std::vector<int>& nums, int k)
	{
		// [1,2,3,4,5,6,7] ºÍ k = 3
		// [5,6,7,1,2,3,4]
		
		int index, temp1, temp2, count = 0;
		int len = nums.size();
		k %= len;
		if (k == 0)
			return;

		for (int i = 0; i < len; i++)
		{
			if (count >= len)
				return;
			index = i;
			temp1 = nums[i];
			while ((index + k) % len!= i)
			{
				temp2 = nums[(index + k) % len];
				nums[(index + k) % len] = temp1;
				index = (index + k) % len;
				temp1 = temp2;
				count++;
			}
			nums[i] = temp1;
			count++;
			
		}
	}
};
