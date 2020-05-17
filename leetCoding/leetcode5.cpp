#include <iostream>
#include <vector>
#include "leetcode5_只出现一次的数字.h"
using namespace std;

int main_leetcode5()
{
	vector<int> nums = { 4,1,2,1,2 };
	Solution s;
	int num = s.singleNumber(nums);
	cout << num << endl;
	cout << endl;
	system("pause");
	return 0;
}