#include <iostream>
#include "leetcode20_最长公共前缀.h"


int main()
{
	vector<string> v = { "flow","hflower","hflowerx" };
	Solution s;
	string res = s.longestCommonPrefix(v);
	cout << res << endl;


	cout << endl;
	system("pause");
	return 0;
}