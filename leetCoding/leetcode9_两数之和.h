#pragma once
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
	// vector<int> twoSum(vector<int>& nums, int target) {
	//     vector<int> v;
	//     int len=nums.size();
	//     for(int i=0;i<len-1;i++)
	//     {
	//         for(int j=i+1;j<len;j++)
	//         {
	//             if(nums[i]+nums[j]==target)
	//                v={i,j};
	//         }
	//     }
	//     return v;
	// }
	vector<int> twoSum(vector<int>& nums, int target)
	{
		int len = nums.size();
		vector<int> twoSum;
		map<int, int> map_sum; //键为nums的值，值为nums下标  

		for (int i = 0; i < len; i++)
		{
			if (map_sum.count(nums[i]) != 0) //找到了值为target - nums[i]的元素
			{
				//将两个索引存入twoSum中
				twoSum.push_back(map_sum[nums[i]]);
				twoSum.push_back(i);
				break;
			}
			map_sum[target - nums[i]] = i; //需要找到一个值为target - nums[i]的元素来和下标为i的元素配对
		}
		return twoSum;
	}
};
