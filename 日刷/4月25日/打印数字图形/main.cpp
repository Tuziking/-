#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    while (cin >> n)
    {
        for (size_t i = 1; i <= 2 * n - 1; i++)
        {
            
            if( i <= n ){
                for (size_t k = 1; k <= n - i; k++)
                {
                    cout << " ";
                }
                for (size_t j = 1; j <= 2 * i - 1; j++)
                {
                    if(j <= i){
                        cout << j;
                    } else{
                        cout << 2 * i - j;
                    }
                }
            } else{
                for (size_t k = 1; k <= i - n; k++)
                {
                    cout << " ";
                }
                for (size_t j = 1; j <= 4 * n - 2 * i - 1; j++)
                {
                    if(j <= 2 * n - i){
                        cout << j;
                    } else{
                        cout << 4 * n - 2 * i - j;
                    }
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
