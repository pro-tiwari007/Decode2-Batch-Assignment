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

TreeNode* build(vector<int> &inorder,int iStart,int iEnd,vector<int> &postorder,int pStart, int pEnd){
    if(iStart > iEnd || pStart > pEnd){
        return NULL;
    }
    TreeNode* root = new TreeNode(postorder[pEnd]);
    if(iStart == iEnd || pStart == pEnd){
        return root;
    }
    int i=iStart;
    while(inorder[i] != postorder[pEnd]){
        i++;
    }
    int leftCount = i - iStart;
    int rightCount = iEnd - i;
    root->left = build(inorder,iStart,i-1,postorder,pStart,pStart+leftCount-1);
    root->right = build(inorder,i+1,iEnd,postorder,pStart+leftCount,pEnd-1);
    return root;
}
TreeNode* constructTreeFromInorderAndPostoder(vector<int> &inorder,vector<int> &postorder){
    int n = inorder.size();
    return build(inorder,0,n-1,postorder,0,n-1);
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
    vector<int> in{4, 8, 2, 5, 1, 6, 3, 7};
    vector<int> post{8, 4, 5, 2, 6, 7, 3, 1};
    TreeNode* root = constructTreeFromInorderAndPostoder(in,post);
    levelOrderTraversal(root);

 return 0;
}
