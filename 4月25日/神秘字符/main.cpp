#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        for (size_t i = 0; i < s1.length(); i++)
        {
            if(i == s1.length() / 2){
                cout << s2;
            }
            cout << s1[i];
        }
        cout << "\n";
        
    }
    
    return 0;
}
