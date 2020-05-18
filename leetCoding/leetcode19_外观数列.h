#pragma once
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
	string countAndSay(int n)
	{
		
		string s = "1";
		for (int i = 1; i < n; ++i)
		{
			int count = 1;  //重复分数，最小是1
			string tmp = "";
			for (int j = 0; j < s.size(); ++j)
			{
				if (s[j] == s[j + 1])//这里可以使用j+1是因为字符串的最后一位是结束符\0
				{
					++count;
				}
				else
				{
					tmp += to_string(count) + s[j];
					count = 1;
				}
			} 
			s = tmp;  //更新第i行值，并一次生成下一行的值
		}
		return s;
	}

};