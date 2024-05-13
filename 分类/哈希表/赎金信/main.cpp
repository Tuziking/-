#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    vector<int> charCount(26, 0);
    for (char c : magazine) {
        charCount[c - 'a']++;
    }
    for (char c : ransomNote) {
        if (--charCount[c - 'a'] < 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
