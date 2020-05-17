#pragma once
#include <vector>
using namespace std;

class Solution {
public:
	int reverse(int x)
	{
		long i = 0;
		long t = x;
		while(t)
		{
			i = i * 10 + t % 10;
			t = t / 10;
			
		}
		if (i<INT_MIN || i>INT_MAX)
			return 0;

		return i;
		
	}
	


};
