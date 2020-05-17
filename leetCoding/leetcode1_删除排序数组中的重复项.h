#pragma once
#include<ctime>
#include <vector>
using namespace std;

/*
给定一个排序数组，你需要在 原地 删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
 */
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		// nums = [0,0,1,1,1,2,2,3,3,4]
		// if(nums.size()==0)
		//     return 0;
		//判断特殊情况，vector为空的情况
		if (nums.empty())
			return 0;
		
		int location = 0;
		for (int i = 1; i < nums.size(); ++i)
		{
			//找到和前面的元素不同的元素
			if (nums[i] != nums[i - 1])
			{
				//更新应该插入的位置
				location++;
				nums[location] = nums[i];
			}
		}
		//返回大小
		return location + 1;

	}
};
