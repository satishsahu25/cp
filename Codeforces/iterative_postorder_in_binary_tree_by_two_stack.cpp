#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793238460;

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

    return 0;
}
