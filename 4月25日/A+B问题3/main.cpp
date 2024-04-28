#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, result;
    result = 0;
    while(cin >> n){
        if ( n == 0){
            break;
        }
        for (size_t i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            result += a;
        }
        cout << result << endl;
        result = 0;
        
    }
    return 0;
}
