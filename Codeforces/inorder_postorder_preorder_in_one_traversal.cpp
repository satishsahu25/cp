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
void preinpost(TreeNode* root)
{
    stack<pair<TreeNode*,int>> st;
    vector<int> pre;
    vector<int> post;
    vector<int> in;
    st.push({root,1});

    while(!st.empty()){
        auto it=st.top();
        st.pop();

        if(it.second==1){
            pre.push_back(it.first->val);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL){
                st.push({it.first->left,1});
            }

        }else if(it.second==2){
            in.push_back(it.first->val);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL){
                st.push({it.first->right,1});
            }

        }else{
            post.push_back(it.first->val);
        }
    }


    cout<<"PreOrder :"<<endl;
    for(int ele:pre){
        cout<<ele<<" ";
    }
    cout<<endl<<"INOrder :"<<endl;
    for(int ele:in){
        cout<<ele<<" ";
    }
    cout<<endl<<"POSTOrder :"<<endl;
    for(int ele:post){
        cout<<ele<<" ";
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
        preinpost(root);
       


    return 0;
}
