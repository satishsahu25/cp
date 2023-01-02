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

bool isleaf(TreeNode *node){
    if(node->left==NULL && node->right==NULL){
        return true;
    }else{
        return false;
    }
}
void left(TreeNode *node, vector<int> &res)
{
    TreeNode *cur = node;
    while (cur != NULL)
    {   
        if(!isleaf(cur)) res.push_back(cur->val);
        if (cur->left != NULL)
        {
            cur=cur->left;
        }else{
            cur=cur->right;
        }
    }
}
void right(TreeNode *node, vector<int> &res)
{
    TreeNode *cur = node;
    vector<int> temp;
    while(cur != NULL){
        if(!isleaf(cur)) temp.push_back(cur->val);
        if(cur->right != NULL) cur=cur->right;
        else cur=cur->left;
    }
    reverse(temp.begin(), temp.end());
    for(int i=0;i<temp.size();i++){
        res.push_back(temp[i]);
    }

}
void leaves(TreeNode *node, vector<int> &res)
{
    TreeNode *cur = node;
    if(isleaf(cur)){
        res.push_back(cur->val);
        return;
    }
    if(cur->left!= NULL) leaves(cur->left,res);
    if(cur->right!= NULL) leaves(cur->right,res);
}

vector<int> boundary(TreeNode *root){
    
    vector<int> res;
    if(root == NULL) return res;
    if(!isleaf(root)) res.push_back(root->val);
    left(root,res);
    leaves(root,res);
    right(root,res);
    return res;
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
    
    vector<int> re=boundary(root);
    for(int child:re){
        cout<<child<<" ";
    }


    return 0;
}
