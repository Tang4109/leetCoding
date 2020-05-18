#include <iostream>
#include "leetcode18_й╣ож strStr().h"


int main_leetcode18()
{
	string  haystack = "baabbbbababbbabab", needle = "abbab";
	Solution s;
	int pos = s.strStr(haystack, needle);
	cout << pos << endl;

	cout << endl;
	system("pause");
	return 0;
}