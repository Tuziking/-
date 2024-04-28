#include <bits/stdc++.h>
using namespace std;
void DFS(int start, vector<int>& result, vector<int>& father){
    if(father[start] == 0){
        return;
    }
    result.push_back(father[start]);
    // cout << father[start] << endl;
    start = father[start];
    DFS(start, result, father);
}

int main(int argc, char const *argv[])
{
    int n;
    
    while (cin >> n)
    {
        int a, b;
        vector<int> father(21);
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            father[a] = b;
        }
        vector<int> ming;
        vector<int> yu;
        DFS(1, ming, father);
        DFS(2, yu, father);
        if(ming.size() < yu.size()){
            cout << "You are my younger" << endl;
        } else if (ming.size() == yu.size()){
            cout << "You are my brother" << endl;
        } else{
            cout << "You are my elder" << endl;
        }
    }
    
    return 0;
}
