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
vector<int> postorder(TreeNode *root)
{

    vector<int> post;
    if (root == NULL)
        return post;
    stack<TreeNode*> s1;
    stack<TreeNode*> s2;
    s1.push(root);
    while(!s1.empty()){
            root=s1.top();
            s1.pop();
            s2.push(root);
            if(root->left!=NULL){
                s1.push(root->left);
            }
            if(root->right!=NULL){
                s1.push(root->right);
            }

    }
    while(!s2.empty()){
        post.push_back(s2.top()->val);
        s2.pop();
    }  
    return post;
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
        vector<int> v=postorder(root);
        for(int ele:v){
            cout<<ele<<" ";
        }


    return 0;
}
