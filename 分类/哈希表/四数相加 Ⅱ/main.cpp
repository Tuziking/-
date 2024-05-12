#include<bits/stdc++.h>
using namespace std;

int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
    unordered_map<int, int> hash1;
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            hash1[nums1[i] + nums2[j]]++;
        }
    }
    int result = 0;
    for (int i = 0; i < nums3.size(); i++)
    {
        for (int j = 0; j < nums4.size(); j++)
        {
            int a = 0 - nums3[i] - nums4[j];
            if (hash1.find(a) != hash1.end())
            {
                result += hash1[a];
            }
        }
        
    }
    return result;
}

int main()
{
    vector<int> nums1 = {0};
    vector<int> nums2 = {0};
    vector<int> nums3 = {0};
    vector<int> nums4 = {0};
    cout << fourSumCount(nums1, nums2, nums3, nums4);
    return 0;
}