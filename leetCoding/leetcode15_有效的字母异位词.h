#pragma once
#include <string>
#include <map>
using namespace std;
class Solution {
public:
	bool isAnagram(string s, string t) {
		int len_s = s.length();
		int len_t = t.length();
		int len;
		if (len_s != len_t)
			return false;
		else { len = len_s; }
		map<char, int> s_map;
		map<char, int> t_map;
		for (int i = 0; i < len; i++)
		{
			s_map[s[i]]++;
			t_map[t[i]]++;
		}

		for (int k = 0; k < len; k++)
		{
			if (s_map[t[k]] != t_map[t[k]])
				return false;
		}

		return true;

	}
};