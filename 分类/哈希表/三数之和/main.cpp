#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    int left, right, i;
    left = 1;
    right = nums.size() - 1;
    i = 0;
    if(nums.size() < 3) return res;
    if(nums[0] > 0) return res;
    while(i < nums.size() - 2) {
        if(i>0 && nums[i] == nums[i-1]) {
            i++;
            continue;
        }
        while (left < right && left > i && right < nums.size())
        {
            if(nums[i] + nums[left] + nums[right] < 0 || (left > i + 1 && nums[left] == nums[left - 1])) {
                left++;
                continue;
            } else if(nums[i] + nums[left] + nums[right] > 0 || (right < nums.size() - 1 && nums[right] == nums[right + 1])){
                right--;
                continue;
            }
            if(nums[i] + nums[left] + nums[right] == 0){
                res.push_back({nums[i], nums[left], nums[right]});
            }
            left ++;
            right --;
        }
        i++;
        left = i + 1;
        right = nums.size() - 1;
    }
    return res;
}
int main(int argc, char const *argv[])
{
    // vector<int> nums = {-1,0,1,2,-1,-4};
    // vector<int> nums = {0,0,0,0};
    // vector<int> nums = {-1,0,1,2,-1,-4,-2,-3,3,0,4};
    // vector<int> nums = {-1,-1,0,0,1,2,3,4};
    vector<int> nums = {34,55,79,28,46,33,2,48,31,-3,84,71,52,-3,93,15,21,-43,57,-6,86,56,94,74,83,-14,28,-66,46,-49,62,-11,43,65,77,12,47,61,26,1,13,29,55,-82,76,26,15,-29,36,-29,10,-70,69,17,49};
    vector<vector<int>> res = threeSum(nums);
    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
