#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string a;
    while (cin >> a)
    {
        if(a == "@"){
            break;
        }
        int n;
        cin >> n;
        if(n == 1){
            cout << a << endl;
            cout << "\n";
            continue;
        }

        for (size_t i = 0; i < n - 1; i++)
        {
            cout << " ";
        }
        cout << a << endl;
        for (size_t i = 2; i < n; i++)
        {
            for (size_t j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            cout << a;
            for (size_t k = 1; k <= 2 * i - 3; k++)
            {
                cout << " ";
            }
            cout<< a << endl;
            
        }
        for (size_t i = 0; i < 2 * n - 1; i++)
        {
            cout << a;
        }
        cout << "\n\n";
    }
    
    return 0;
}
