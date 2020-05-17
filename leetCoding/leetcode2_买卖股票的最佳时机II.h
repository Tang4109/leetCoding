#pragma once
#include <vector>


class Solution {
private:
	int profit = 0;
public:
	int maxProfit(std::vector<int>& prices)
	{
		if (prices.empty())
			return 0;
		//Ì°ÐÄ²ßÂÔ
		int len = prices.size();
		for(int i=1;i<len;i++)
		{
			if(prices[i]>prices[i-1])
			{
				profit += prices[i] - prices[i - 1];
			}
		}
		return profit;
		
	}

};
