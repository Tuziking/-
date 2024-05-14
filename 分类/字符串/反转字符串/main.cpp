#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0, right = s.size() - 1;
    while(left < right){
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main(int argc, char const *argv[])
{
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);
    for (char c : s) {
        cout << c << " ";
    }
    return 0;
}
