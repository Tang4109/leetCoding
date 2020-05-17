#pragma once
#include<ctime>
#include <vector>
using namespace std;

/*
����һ���������飬����Ҫ�� ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�
��Ҫʹ�ö��������ռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�
 */
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		// nums = [0,0,1,1,1,2,2,3,3,4]
		// if(nums.size()==0)
		//     return 0;
		//�ж����������vectorΪ�յ����
		if (nums.empty())
			return 0;
		
		int location = 0;
		for (int i = 1; i < nums.size(); ++i)
		{
			//�ҵ���ǰ���Ԫ�ز�ͬ��Ԫ��
			if (nums[i] != nums[i - 1])
			{
				//����Ӧ�ò����λ��
				location++;
				nums[location] = nums[i];
			}
		}
		//���ش�С
		return location + 1;

	}
};
