#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    char value;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(char x): value(x), left(nullptr), right(nullptr) {}
};

TreeNode* buildTree(string s1, string s2){
    if(s1.size() == 1){
        return new TreeNode(s1[0]);
    }
    if(s1.size() ==0){
        return nullptr;
    }
    char c = s1[0];
    int i = s2.find(c);
    string s2_left = s2.substr(0, i);
    string s2_right = s2.substr(i+1, s2.size());
    string s1_left = s1.substr(1, s2_left.size());
    string s1_right = s1.substr(1 + s2_left.size(), s1.size());
    TreeNode* node = new TreeNode(c);
    node->left = buildTree(s1_left, s2_left);
    node->right = buildTree(s1_right, s2_right);
    return node;
}

int ComputeHeight(TreeNode* root){
    if(root == nullptr){
        return 0;
    }
    int left = ComputeHeight(root->left);
    int right = ComputeHeight(root->right);
    return max(left, right) + 1;
}

int main(int argc, char const *argv[])
{
    int n;
    while(cin >> n) {
        string s1, s2;
        cin >> s1 >> s2;
        TreeNode* root = buildTree(s1, s2);
        cout << ComputeHeight(root) << endl;
    }
    return 0;
}
