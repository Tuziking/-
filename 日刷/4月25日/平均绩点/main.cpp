#include <bits/stdc++.h>
using namespace std;

map<string, int> m = {
    {"A", 4},
    {"B", 3},
    {"C", 2},
    {"D", 1},
    {"F", 0}
};
int main(int argc, char const *argv[])
{
    string line;
    while (getline(cin, line))
    {
        if (line.empty()){
            printf("\n");
            break;
        }
        bool flag = true;
        int result = 0;
        int count = 0;
        string temp;
        istringstream iss(line);
        while (iss >> temp)
        {
            if (m.count(temp) > 0){
                result += m[temp];
            } else {
                flag = false;
            }
            count++;
        }
        if (flag){
            printf("%.2f\n", (float)result / count);
        } else {
            cout << "Unknown\n";
        }
    }
    
    return 0;
}
