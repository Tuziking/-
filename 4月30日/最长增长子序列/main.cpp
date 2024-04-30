#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        a = a.substr(1,a.size() - 1);
        // 按，分割字符串
        vector<string> b;
        int start = 0;
        for (size_t i = 0; i < a.size(); i++)
        {
            if (a[i] == ',')
            {
                b.push_back(a.substr(start, i - start));
                start = i + 1;
            }
        }
        b.push_back(a.substr(start, a.size() - start - 1));
        
        vector<int> dp(b.size(), 1);
        for (size_t i = 1; i < b.size(); i++)
        {
            for (size_t j = 0; j < i; j++)
            {
                if(b[i] > b[j])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            
        }
        int max = 0;
        for (size_t i = 0; i < dp.size(); i++)
        {
            if (dp[i] > max)
            {
                max = dp[i];
            }   
        }
        cout << max << endl;
        

    }
    
    return 0;
}
