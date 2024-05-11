#include<bits/stdc++.h>
using namespace std;

bool isHappy(int n) {
    unordered_set<int> s;
    while (n != 1 && s.find(n) == s.end())
    {
        s.insert(n);
        int sum = 0;
        while (n)
        {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        n = sum;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << isHappy(n) << endl;
    return 0;
}