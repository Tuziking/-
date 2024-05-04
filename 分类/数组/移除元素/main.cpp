#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums,int val){
    int p1 = nums.size()-1;
    int p2 = nums.size()-1;
    while (p1 >= 0)
    {
        if (nums[p1] == val)
        {
            swap(nums[p1],nums[p2]);
            p2--;
        }
        p1--;
    }
    return p2 + 1;
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
    int val;
    cin >> val;
    cout << removeElement(nums,val) << endl;

    return 0;
}
