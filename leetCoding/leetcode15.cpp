#include <iostream>
#include <vector>
#include "leetcode15_有效的字母异位词.h"
using namespace std;



int main_leetcode15()
{
	string  h = "bnagram", k = "nagaram";
	Solution s;
	bool flag = s.isAnagram(h, k);
	cout << flag << endl;

	cout << endl;
	system("pause");
	return 0;
}