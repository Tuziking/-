#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        int length = a.length();
        for (size_t i = 0; i < length; i += 2)
        {
            cout << a[i+1] << a[i];
        }
        cout << "\n";
         
    }
    
    return 0;
}
