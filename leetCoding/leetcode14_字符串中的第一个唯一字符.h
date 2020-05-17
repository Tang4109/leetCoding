#pragma once
#include <map>
using namespace std;


class Solution {
public:
	int firstUniqChar(string s) {
		int len = s.length();
		map<char, int> str_map;
		for (int i = 0; i < len; i++)
		{
			str_map[s[i]]++;
		}
		for (int j = 0; j < len; j++)
		{
			if (str_map[s[j]] == 1)
				return j;
		}

		return -1;

	}
};