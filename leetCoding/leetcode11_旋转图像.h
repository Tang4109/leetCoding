#pragma once
#include <vector>
using namespace std;


class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		int len = matrix.size();
		for (int loop = 1; loop <= len/2; loop++)
		{
			for (int i = loop - 1; i < len - loop; i++)
			{
				swap(matrix[loop - 1][i], matrix[i][len - loop]);
				swap(matrix[len - loop][len - i - 1], matrix[len - i - 1][loop - 1]);
				swap(matrix[loop - 1][i], matrix[len - loop][len - i - 1]);
			}
		}

		
	}
};

//loop=2,i=1