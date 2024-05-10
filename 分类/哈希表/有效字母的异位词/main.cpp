#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.size() != t.size()){
        return false;
    }
    vector<int> ch(26, 0);
    for (size_t i = 0; i < s.size(); i++)
    {
        ch[s[i] - 'a']++;
        ch[t[i] - 'a']--;
    }
    for (size_t i = 0; i < 26; i++)
    {
        if(ch[i] != 0){
            return false;
        }
    }
    return true; 
}

int main(int argc, char const *argv[])
{
    string s, t;
    cin >> s >> t;
    cout << isAnagram(s, t) << endl;
    return 0;
}