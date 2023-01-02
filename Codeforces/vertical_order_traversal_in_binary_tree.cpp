#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793238460;

struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


struct TreeNode* addnodes(int val){
    struct TreeNode *node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left=NULL;
    node->right=NULL;
    return node;
}
vector<vector<int>> vertical(TreeNode *root)
{   
    vector<vector<int>> res;
    if(root==NULL) return res;
   map<int,map<int,multiset<int>>> nodes;
    queue<pair<TreeNode*,pair<int,int>>> q;
    q.push({root,{0,0}});
    while(!q.empty()){
        auto cur=q.front();
        q.pop();
        int ver=cur.second.first;
        int lev=cur.second.second;
        nodes[ver][lev].insert(cur.first->val);
        if(cur.first->left!=NULL){
            q.push({cur.first->left,{ver+1}})
        }

    }



    
    
}

int main()
{
    struct TreeNode*root=(struct TreeNode*)malloc(sizeof(struct TreeNode));
        root->val=1;
        root->left=addnodes(2);
        root->right=addnodes(3);

        root->right->left=addnodes(6);
        root->right->right=addnodes(7);
        root->right->right->left=addnodes(9);
        root->right->right->right=addnodes(10);
        root->left->right=addnodes(5);
        root->left->left=addnodes(4);
        root->left->right->left=addnodes(8);
       

    return 0;
}
