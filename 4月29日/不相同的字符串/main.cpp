#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vector<int> used(26, 0);
        for (size_t i = 0; i < s.size(); i++)
        {
            used[s[i]-'a']++;
        }
        sort(used.begin(), used.end());
        int count = 0;
        while (used.back() > 2)
        {
            count++;
            used[0] += 1;
            used.back() -= 2;
            sort(used.begin(), used.end());
        }
        for (int j = 0; j < 26; ++j) {
            if (used[j] == 2){
                count ++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
