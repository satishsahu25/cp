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
vector<vector<int>> zigzag(TreeNode *root)
{

    vector<vector<int>> post;
    if (root == NULL)
        return post;
    queue<TreeNode *> q;
    q.push(root);
    bool ltr = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> level(size);

        for (int i = 0; i < size; i++)
        {
            TreeNode *node = q.front();
            q.pop();

            //if you are directly accessing the index of array then 
            // first define the size as by default zero length vector is created
            //from declaration

           int index=ltr?i:size-i-1;
           level[index]=node->val;
            if(node->left!= NULL) q.push(node->left);
            if(node->right!= NULL) q.push(node->right);
            

        }
        post.push_back(level);
        ltr=!ltr;
    }

    return post;
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
    vector<vector<int>> vv = zigzag(root);
    for (auto ele : vv)
    {
        for (int ele2 : ele)
        {
            cout << ele2 << " ";
        }
    }

    return 0;
}
