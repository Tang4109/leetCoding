#pragma once
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
	string countAndSay(int n)
	{
		
		string s = "1";
		for (int i = 1; i < n; ++i)
		{
			int count = 1;  //�ظ���������С��1
			string tmp = "";
			for (int j = 0; j < s.size(); ++j)
			{
				if (s[j] == s[j + 1])//�������ʹ��j+1����Ϊ�ַ��������һλ�ǽ�����\0
				{
					++count;
				}
				else
				{
					tmp += to_string(count) + s[j];
					count = 1;
				}
			} 
			s = tmp;  //���µ�i��ֵ����һ��������һ�е�ֵ
		}
		return s;
	}

};