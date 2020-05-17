#include <iostream>
#include <vector>
#include "leetcode11_Ðý×ªÍ¼Ïñ.h"
using namespace std;



int main_leetcode11()
{
	vector<vector<int>>matrix = {
		{5, 1, 9, 11},
		{2, 4, 8, 10},
		{13, 3, 6, 7},
		{15, 14, 12, 16}
	};
	Solution s;
	s.rotate(matrix);
	for(int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix[i].size();j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}


	

	cout << endl;
	system("pause");
	return 0;
}