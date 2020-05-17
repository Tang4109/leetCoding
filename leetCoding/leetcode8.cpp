#include <iostream>
#include <vector>
#include "leetcode8_“∆∂Ø¡„.h"
using namespace std;

int main_leetcode8()
{
	vector<int> nums = { 0,1,0,2,2,1 };
	Solution s;
	s.moveZeroes(nums);
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}