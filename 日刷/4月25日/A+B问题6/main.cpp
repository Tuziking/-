#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m;
    int result = 0;
    while (cin >> n)
    {
        for( size_t i = 0; i < n; i++){
            cin >> m;
            for (size_t j = 0; j < m; j++)
            {
                int a = 0;
                cin >> a;
                result += a;
                // cout << result << "\n";
            }
            cout << result;
            if(i != n-1)
                cout << "\n\n";
            else
                cout << "\n";
            result = 0;
        }
        
    }
    
    return 0;
}
