#pragma once
#include <string>
#include <queue>
using namespace std;
class Solution {
public:
	int strStr(string haystack, string needle) {
		if (needle.empty())
			return 0;
		if (haystack == needle)
			return 0;
		int len_h = haystack.length();
		int len_n = needle.length();
		if (len_h < len_n) { return -1; }//�������

		int count = 0;
		for (int i = 0; i < len_h; i++)
		{
			if(i + len_n - 1>=len_h)//������Χ
			{
				return -1;
			}
			//�ж���β����С��Χ,��С���Ӷ�
			if (haystack[i] == needle[0]&& haystack[i + len_n - 1] == needle[len_n - 1])
			{
				if(len_n==1){ count = 1; }//needleֻ��һ��Ԫ�ص��������
				else{ count = 2; }
				for (int j = i + 1; j < i+len_n-1; j++)
				{
					if (haystack[j] == needle[j - i])
						count++;
					else { break; }
				}
				if (count == len_n)
					return i;
			}

		}
		return -1;

	}
};
