#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int num;
    char value;
    int left, right;
    TreeNode(int x, char y, int z, int a): num(x), value(y), left(z), right(a) {}
};
vector<TreeNode*> nodes;

void printTree1(TreeNode* root){
    if(!root){
        return;
    }
    cout << root->value;
    printTree1(nodes[root->left]);
    printTree1(nodes[root->right]);
}

int main(int argc, char const *argv[])
{
    nodes.push_back(nullptr);
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        char value;
        int left, right;
        cin >> value >> left >> right;
        nodes.push_back(new TreeNode(i, value, left, right));
        
    }
    printTree1(nodes[0]);
    return 0;
}
