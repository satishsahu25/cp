#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793238460;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *addnodes(int val)
{
    struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}
vector<int> inorder(TreeNode *root)
{
    vector<int> in;
    stack<TreeNode *> s1;
    TreeNode *node = root;

    while (1)
    {

        if (node != NULL)
        {
            s1.push(node);
            node = node->left;
        }
        else
        {
            if (s1.empty())
                break;
            node = s1.top();
            s1.pop();
            in.push_back(node->val);
            node = node->right;
        }
    }

    return in;
}

int main()
{
    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->val = 1;
    root->left = addnodes(2);
    root->right = addnodes(3);

    root->right->left = addnodes(6);
    root->right->right = addnodes(7);
    root->right->right->left = addnodes(9);
    root->right->right->right = addnodes(10);
    root->left->right = addnodes(5);
    root->left->left = addnodes(4);
    root->left->right->left = addnodes(8);
    vector<int> v = inorder(root);
    for (int ele : v)
    {
        cout << ele << " ";
    }

    return 0;
}
