#pragma once
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	bool isPalindrome(string s) {
		// transform(s.begin(),s.end(),s.begin(),::tolower);//大小写转换函数
		int s_len = s.length();
		vector<char> v;
		for (int i = 0; i < s_len; i++)
		{
			if (isdigit(s[i]))
				v.push_back(s[i]);
			if (isalpha(s[i]))
			{
				if (s[i] >= 'A'&&s[i] <= 'Z')
					s[i] += 32;
				v.push_back(s[i]);
			}

		}
		int v_len = v.size();
		for (int j = 0; j < v_len / 2; j++)
		{
			if (v[j] != v[v_len - j - 1])
				return false;
		}

		return true;

	}
};