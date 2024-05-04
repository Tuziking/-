#include <bits/stdc++.h>
using namespace std;

    vector<int> sortedSquares(vector<int>& nums) {

        int p1,p2,k,length;
        length = nums.size();
        p1 = 0;
        vector<int> result(length);
        p2 = length - 1;
        for (int i = length - 1; i >= 0; ++i) {
            if(abs(nums[p1]) > abs(nums[p2])){
                result[i] = nums[p1] * nums[p1];
                p1++;
            }else{
                result[i] = nums[p2] * nums[p2];
                p2--;
            }
        }
        return result;
    }


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> result = sortedSquares(nums);
    for (size_t i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }


    return 0;
}