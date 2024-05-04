#include<bits/stdc++.h>
using namespace std;
//-1 0 3 5 9 12
int search(vector<int>& nums, int target) {
    if(nums.size() == 0) return -1;
    if(nums.size() == 1) return nums[0] == target ? 0 : -1;
    int left = 0;
    int right = nums.size();
    int middle = (left + right) / 2;
    // cout << right << endl;
    while(right != left){
        middle = (left + right) / 2;
        // cout << middle << endl;
        if(nums[middle] == target){
            return middle;
        }else if(nums[middle] < target){
            left = middle;
        }else{
            right = middle;
        }
    }
    return -1;
}


int main(int argc, char const *argv[])
{
    int n;
    vector<int> nums;
    for (size_t i = 0; i < 6; i++)
    {
        cin >> n;
        nums.push_back(n);
    }
    cout << search(nums, 2) << endl;
    return 0;
}
