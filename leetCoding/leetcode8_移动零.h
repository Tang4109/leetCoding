#pragma once
#include <vector>
using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int k = 0;  //数组中索引为[0，k）的均为非零元素
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] != 0) {
				if (k != i)//自己和自己没必要交换
					swap(nums[i], nums[k]);
				k++;
			}
		}
	}


	void moveZeroes2(vector<int>& nums) {
		int len = nums.size();
		int count = 0;
		for (vector<int>::iterator iter = nums.begin(); iter != nums.end();)
		{
			if ((*iter) == 0)
			{
				iter = nums.erase(iter);
				count++;
			}
			else { ++iter; }
		}
		vector<int>(nums).swap(nums);
		for (int i = 0; i < count; i++)
		{
			nums.push_back(0);
		}
	}
};