/*
function : �����㷨
author   : Zhangyunjia
date     : 2020/3/3 12:18
*/

#include <iostream>
#include <vector>
#include "leetcode3_��ת����.h"
using namespace std;

int main_leetcode3()
{
	vector<int> nums = { 10,0, 7, 1, 1, 9, 2, 5, 3, 4 };
	Solution s;
	s.rotate(nums,3);

	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}