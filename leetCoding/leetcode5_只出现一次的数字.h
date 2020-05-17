#pragma once
#include <algorithm>
#include <vector>

class Solution {
public:
	int singleNumber(std::vector<int>& nums) {
		//求异或
		//相同的数字经过异或运算后结果为0,任何数字与0进行异或运算都是该数字本身
		int len = nums.size();
		int num = 0;
		for (int i = 0; i < len; i++)
		{
			num ^= nums[i];
		}
		return num;


	}
	int singleNumber2(std::vector<int>& nums) {
		std::sort(nums.begin(), nums.end());
		int len = nums.size();
		for (int i = 0; i < len - 1; i += 2)
		{
			if (nums[i] != nums[i + 1])
				return nums[i];
		}
		return nums[len - 1];
	}
};
