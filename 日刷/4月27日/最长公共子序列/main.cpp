#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s1, s2;

    while(cin >> s1 >> s2) {
        vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, 0));
        for (size_t i = 1; i <= s1.size(); i++)
        {
            for (size_t j = 1; j <= s2.size(); j++)
            {
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = max(dp[i][j-1] + 1, dp[i-1][j] + 1);
                }else{
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
//                cout << dp[i][j] << endl;
            }
//            cout << endl;
        }
        int max = 0;
        for (size_t i = 1; i <= s1.size(); i++)
        {
            for (size_t j = 1; j <= s2.size(); j++)
            {
                if(dp[i][j] > max){
                    max = dp[i][j];
                }
            }
        }
         cout << max << endl;
    }
    return 0;
}
