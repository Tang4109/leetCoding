#include <iostream>
#include <vector>
#include "interview2_≤Â»Î≈≈–Ú.h"
using namespace std;

int main_interview2()
{
	vector<int> nums = { 10,0, 7, 1, 1, 9, 2, 5, 3, 4 };
	insertSort<int> ins(nums);
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}