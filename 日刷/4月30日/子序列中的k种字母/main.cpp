#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main() {
    int n,k;
    vector<int> hash(26);
    string s;
    cin >> n >> k >> s;
    vector<long long> dp(k+1);
    dp[0] = 1;
    for (size_t i = 0; i < n; i++)
    {
        hash[s[i] - 'a'] ++;
    }
    int x;
    for (size_t i = 0; i < 26; i++)
    {
        x = ((long long)pow(2,hash[i]) % mod - 1);
        for (size_t j = k; j >= 1; j--)
        {
            dp[j] = dp[j] + dp[j-1]*x;
            dp[j] = dp[j] % mod;
        }
        
    }
    cout << dp[k] << endl;
    
}