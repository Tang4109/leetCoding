#include <iostream>
#include <vector>
#include "leetcode9_两数之和.h"
using namespace std;

int main_leetcode9()
{
	vector<int> nums = { 2, 7, 11, 15 };
	int target = 9;
	Solution s;
	vector<int> result = s.twoSum(nums, target);
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
	int x = 7/2;
	cout << x << endl;
	cout << endl;
	system("pause");
	return 0;
}