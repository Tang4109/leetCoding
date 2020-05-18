#pragma once
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.empty())
			return "";
		string s = strs[0];
		for (int i = 1; i < strs.size(); i++) {
			//从左至右查找，如果找到返回0
			while (strs[i].find(s) != 0) {
				int flag = strs[i].find(s);
				s = s.substr(0, s.size() - 1);//找不到子串就将s最后一位字符删除
				if (s.empty())
					return "";
			}
		}
		return s;
	}

	string longestCommonPrefix2(vector<string>& strs)
	{
		if (strs.empty()) { return ""; }
		string s = "";
		int len = strs.size();
		int len_min = strs[0].length();
		for (int i = 1; i < len; i++)
		{
			if (strs[i].length() < len_min)
			{
				len_min = strs[i].length();
			}
		}

		for (int k = 0; k < len_min; k++)
		{
			char flag = strs[0][k];
			int j = 0;
			while (strs[j][k] == flag)
			{
				j++;
				if (j == len) { break; }
			}
			if (j == len)
			{
				s += flag;
			}
			else
			{
				return s;
			}

		}

		return s;
	}
	
};
