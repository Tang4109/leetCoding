#pragma once
#include <vector>
#include <algorithm>

class Solution {
public:
	bool containsDuplicate(std::vector<int>& nums) {
		std::sort(nums.begin(), nums.end());
		int len = nums.size();
		for(int i=0;i<len-1;i++)
		{
			if (nums[i + 1] == nums[i])
				return true;
		}
		return false;

	}
};
