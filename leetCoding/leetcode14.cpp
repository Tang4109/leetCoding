#include <iostream>
#include <vector>
#include "leetcode14_字符串中的第一个唯一字符.h"
using namespace std;



int main_leetcode14()
{
	string str = "leetcode";
	Solution s;
	int idx = s.firstUniqChar(str);
	cout << idx << endl;

	cout << endl;
	system("pause");
	return 0;
}