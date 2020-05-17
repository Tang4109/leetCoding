#pragma once
#include <algorithm>
#include <vector>

class Solution {
public:
	int singleNumber(std::vector<int>& nums) {
		//�����
		//��ͬ�����־�������������Ϊ0,�κ�������0����������㶼�Ǹ����ֱ���
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
