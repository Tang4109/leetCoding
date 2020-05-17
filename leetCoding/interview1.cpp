/*
function : ≈≈–ÚÀ„∑®
author   : Zhangyunjia
date     : 2020/3/3 12:18
*/

#include <iostream>
#include <vector>
#include "interview1_√∞≈›≈≈–Ú.h"
using namespace std;

int main_interview1()
{
	vector<int> nums = { 10,0, 7, 1, 1, 9, 2, 5, 3, 4 };
	Solution<int> s;
	s.bubbleSort2(nums);
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}



