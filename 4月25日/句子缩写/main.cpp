#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        string line;
        getline(cin >> ws, line);
        istringstream iss(line);
        vector<char> v(n);
        string a;
        while (iss >> a)
        {
            v.push_back(a[0]);
            if(a[0] >= 97){
                char b =a[0] - 32;
                cout<< b;
                continue;
            }
            cout << a[0];
        }
        cout << "\n";
    }    
    return 0;
}
