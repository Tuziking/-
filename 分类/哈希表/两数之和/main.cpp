#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++)
    {
        int a = target - nums[i];
        if (hash.find(a) != hash.end())
        {
            return {hash[a], i};
        }
        hash[nums[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> res = twoSum(nums, target);
    for(auto i : res)
        cout << i << " ";
    return 0;
}