#include<bits/stdc++.h>
using namespace std;


    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0;
        int sum = 0;
        int cur_length = 0;
        int min_length = INT_MAX;
        int length = nums.size();
        for (size_t end = 0; end < length; end++)
        {
            sum += nums[end];
            cur_length ++;
            if(cur_length < min_length && sum >= target){
                min_length = cur_length;
            }
            while (sum >= target)
            {
                sum -= nums[start];
                start++;
                cur_length --;
                if(cur_length < min_length && sum >= target){
                    min_length = cur_length;
                }
            }
        }
        
        if(min_length == INT_MAX){
            return 0;
        }
        return min_length;
    }

int main(int argc, char const *argv[])
{
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> target;
    cout << minSubArrayLen(target, nums);


    return 0;
}