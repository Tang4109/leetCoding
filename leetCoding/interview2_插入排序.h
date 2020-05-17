#pragma once

template <typename T>
class insertSort
{
private:
	int current;
	int j;
public:
	insertSort(std::vector<T>& nums)
	{
		for (int i = 1; i < nums.size(); i++)
		{
			current = nums[i];
			for (j = i - 1; j >= 0 && nums[j] > current; j--)
			{
				//����
				nums[j + 1] = nums[j];
			}
			//j+1����Ϊforѭ�����j--��
			nums[j + 1] = current;
		}
	}
};
