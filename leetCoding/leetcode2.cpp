#include <iostream>
#include <vector>
#include "leetcode2_������Ʊ�����ʱ��II.h"
using namespace std;

int main_leetcode2()
{
	vector<int> prices = { 7,1,5,3,6,4 };
	Solution s;
	int profit = s.maxProfit(prices);
	cout << profit << endl;

	system("pause");
	return 0;
	
}