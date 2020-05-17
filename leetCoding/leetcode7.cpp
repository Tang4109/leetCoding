#include <iostream>
#include <vector>
#include "leetcode7_º”“ª.h"
using namespace std;

int main_leetcode7()
{
	vector<int> digits = { 1,2,2,1 };
	Solution s;
	vector<int> nums = s.plusOne(digits);
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	cout << endl;
	system("pause");
	return 0;
}