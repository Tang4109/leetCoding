#include <iostream>
#include <vector>
#include "leetcode12_·´×ª×Ö·û´®.h"
using namespace std;



int main_leetcode12()
{
	vector<char>str = { 'h', 'e', 'l', 'l', 'o' };
	Solution s;
	s.reverseString(str);
	for (int i = 0; i < str.size(); i++)
	{
			cout << str[i] << " ";

	}

	cout << endl;
	system("pause");
	return 0;
}