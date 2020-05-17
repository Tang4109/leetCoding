#include <iostream>
#include <vector>
#include "leetcode6_两个数组的交集II.h"
using namespace std;

int main_leetcode6()
{
	vector<int> nums1 = { 1,2,2,1 };
	vector<int> nums2 = { 2,2 };

	Solution s;
	vector<int> nums = s.intersect(nums1, nums2);
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	cout << endl;
	system("pause");
	return 0;
}