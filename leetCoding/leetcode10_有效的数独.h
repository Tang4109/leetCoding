#pragma once
#include <vector>
using namespace std;

class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board)
	{
		int row[9][9] = { 0 }, col[9][9] = { 0 }, m[9][9] = { 0 };
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++)
			{
				if (board[i][j] != '.')
				{
					int num = board[i][j] - '0' - 1;
					row[i][num]++;//行表示
					col[j][num]++;//列表示
					m[3 * (i / 3) + (j / 3)][num]++;//以此表示九个小九宫格
					//是否有重复的判断
					if (row[i][num] == 2 || col[j][num] == 2 || m[3 * (i / 3) + (j / 3)][num] == 2)
						return false;
				}
			}
		return true;
	}
};