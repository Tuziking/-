#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string a;
    while (cin >> a)
    {
        int result = 0;
        for (auto b : a)
        {
            b = b - '0';
            if(b % 2 == 0){
                result += b;
            }
        }
        cout << result << "\n\n";
    }
    
    return 0;
}
