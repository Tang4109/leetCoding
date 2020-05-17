/*
function : 排序算法
author   : Zhangyunjia
date     : 2020/3/3 12:18
*/

#include <iostream>
#include <vector>
#include "leetcode1_删除排序数组中的重复项.h"
using namespace std;

int main_leetcode1()
{
	vector<int> nums = { 0,0, 1, 1, 1, 2, 2, 3, 3, 4 };
	Solution s;
	int count = s.removeDuplicates(nums);
	for(int i=0;i<count;++i)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}



