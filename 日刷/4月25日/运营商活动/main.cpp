#include <bits/stdc++.h>
using namespace std;

int getDays(int m, int k){
    if(m < k)
        return m;
    int a = m / k;
    int b = m % k;
    int temp = a + b;
    return getDays(temp, k) + a * k;
}

int main(int argc, char const *argv[])
{
    int m,k;
    while (cin >> m >> k)
    {
        if( m == 0 && k == 0){
            break;
        }
        cout << getDays(m, k) << endl;
    }
    return 0;
}
