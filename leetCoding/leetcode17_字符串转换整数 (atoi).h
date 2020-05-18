#pragma once
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	int myAtoi(string str) {
		bool negative = false;
		int startIndex = 0;
		int res = 0;
		int curDigit = 0;
		while (str[startIndex] == ' ')
			startIndex++;
		if (str[startIndex] == '-') {
			negative = true;
			startIndex++;
		}
		else if (str[startIndex] == '+') {
			startIndex++;
		}
		for (auto i = startIndex; i < str.size() && isdigit(str[i]); ++i) {
			curDigit = str[i] - '0';
			if (res > INT_MAX / 10 || (res == INT_MAX / 10 && curDigit > 7))
				return (negative ? INT_MIN : INT_MAX);
			res = res * 10 + curDigit;
			// res = res * 10 - 48 + static_cast<int>(str[i]);
		}
		return (negative ? -res : res);
	}
};