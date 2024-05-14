#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int i, j , left, right, length;
    length = nums.size();
    for (i = 0; i < length - 3; ++i) {
        if(nums[i] > target && (nums[i] >=0 || target >= 0) || nums[length-1] < 0 && target > 0) {
            break;
        }
        if (i > 0 && nums[i] == nums[i-1]){
            continue;
        }
        for (j = i + 1; j < length - 2; ++j) {
            left = j + 1;
            right = length - 1;
            long midSum = (long) target - nums[i] - nums[j];
            if (j > i+1 && nums[j] == nums[j-1]) {
                continue;
            }
            while(left < right){
                if(left > j+1 && nums[left] == nums[left-1]) {
                    left++;
                    continue;
                }
                if(right < length - 1 && nums[right] == nums[right+1]) {
                    right--;

                    continue;
                }
                if ((long) nums[left] + nums[right] == midSum) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    left++;
                    right--;
                }else if ((long)nums[left] + nums[right] < midSum){
                    left++;
                }else if ((long)nums[left] + nums[right] > midSum) {
                    right--;
                }
            }
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1000000000,1000000000,1000000000,1000000000};
    int target = -294967296;
    vector<vector<int>> result = fourSum(nums, target);
    for (int i = 0; i < result.size(); i++){
        for (int num : result[i]) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
