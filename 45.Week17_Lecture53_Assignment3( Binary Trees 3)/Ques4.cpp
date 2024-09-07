#include<iostream>
#include<vector>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};


TreeNode* build(vector<int> &preorder,int preStart,int preEnd,vector<int> &postorder,int postStart, int postEnd){
    if(preStart > preEnd || postStart > postEnd){
        return NULL;
    }
    TreeNode* root = new TreeNode(preorder[preStart]);
    if(preStart == preEnd){
        return root;
    }
    int i=postStart;
    while(postorder[i] != preorder[preStart+1]){
        i++;
    }
    int length = i - postStart+1;
    root->left = build(preorder,preStart+1,preStart+length,postorder,postStart,i);
    root->right = build(preorder,preStart+length+1,preEnd,postorder,i+1,postEnd-1);
    return root;
}
TreeNode* constructTreeFromPreorderAndPostoder(vector<int> &preorder,vector<int> &postorder){
    int n = preorder.size();
    return build(preorder,0,n-1,postorder,0,n-1);
}


int levels(TreeNode *root){
    if(root == NULL){
        return 0;
    }
    return 1 + max(levels(root->left),levels(root->right));
}


void printNthLevel(TreeNode* root,int n){
    if(root == NULL){
        return;
    }
    else if(n==1){
        cout<<root->data<<" ";
        return;
    }
    printNthLevel(root->left,n-1);
    printNthLevel(root->right,n-1);
}

void levelOrderTraversal(TreeNode *root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        printNthLevel(root,i);
        cout<<endl;
    }
}


int main(){
    vector<int> pre{1, 2, 4, 8, 5, 3, 6, 7};
    vector<int> post{8, 4, 5, 2, 6, 7, 3, 1};
    TreeNode* root = constructTreeFromPreorderAndPostoder(pre,post);
    levelOrderTraversal(root);

 return 0;
}
