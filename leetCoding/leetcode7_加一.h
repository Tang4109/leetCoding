#pragma once
#include <vector>

class Solution {
public:
	std::vector<int> plusOne(std::vector<int>& digits) {
		int len = digits.size();
		//[9,9,9,9],[8,8,8,8]
		int i = len - 1;
		for (; i >= 0; i--)
		{
			digits[i]++;
			if (digits[i] == 10)
			{
				digits[i] = 0;
			}
			else
			{
				return digits;
			}

		}
		if (i == -1)
		{
			digits.insert(digits.begin(), 1);
		}
		return digits;

	}
};
