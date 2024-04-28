#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    while (cin >> n)
    {
        if(n == 0){
            break;
        }
        vector<int> v;
        bool flag = false;
        int a, b;
        cin >> a;
        b = a;
        for (size_t i = 0; i < n - 1; i++)
        {
            cin >> a;
            if( b > a){
                v.push_back(a);
            } else{
                b = a;
            }
            
        }
        if(v.size() == 0){
            cout << "Yes" << endl;
            continue;
        }
        for (size_t i = 0; i < v.size() - 1; i++)
        {
            if(v[i] < v[i+1]){
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }
        
    }
    


    return 0;
}
