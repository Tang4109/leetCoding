#include <iostream>
#include "leetcode16_验证回文字符串.h"
#include <string>


int main_leetcode16()
{
	string str = "A man, a plan, a canal: Panama";
	Solution s;
	bool flag = s.isPalindrome(str);
	cout << flag << endl;


	system("pause");
	return 0;
}



