#pragma once
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		int len1 = nums1.size();
		int len2 = nums2.size();
		map<int, int> num_map;
		for(int i=0;i<len1;i++)
		{
			num_map[nums1[i]]++;
		}

		vector<int> intersection;
		for(int j=0;j<len2;j++)
		{
			if(num_map[nums2[j]])
			{
				intersection.push_back(nums2[j]);
				num_map[nums2[j]]--;
			}
		}
		return intersection;

	}
};
