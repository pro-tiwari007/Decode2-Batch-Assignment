#include<iostream>
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


void display(TreeNode* root){
    if (root == NULL){
        return;
    }
    display(root->left);
    cout << root->data << " ";
    display(root->right);
}



bool helper(TreeNode* root1, TreeNode* root2){
        if(root1 == NULL && root2 == NULL){
            return true;
        }
        if(root1 == NULL || root2 == NULL){
            return false;
        }
        else if((root1->data == root2->data)){
            return (helper(root1->left,root2->right) && helper(root1->right,root2->left));
        }
        else{
            return false;
        }
    }
bool isSymmetric(TreeNode* root) {
    return helper(root->left,root->right);
}

int main(){
    TreeNode *root = new TreeNode(1);
    TreeNode *newNode1 = new TreeNode(2);
    TreeNode *newNode2 = new TreeNode(2);
    TreeNode *newNode3 = new TreeNode(3);
    TreeNode *newNode4 = new TreeNode(4);
    TreeNode *newNode5 = new TreeNode(4);
    TreeNode *newNode6 = new TreeNode(3);
    TreeNode *newNode7 = new TreeNode(5);
    TreeNode *newNode8 = new TreeNode(5);
    root->left = newNode1;
    root->right = newNode2;
    newNode1->left = newNode3;
    newNode1->right = newNode4;
    newNode2->left = newNode5;
    newNode2->right = newNode6;
    newNode3->left = newNode7;
    newNode6->right = newNode8;
    display(root);
    cout<<endl;
    if(isSymmetric(root)){
        cout<<"Tree is symmetric."<<endl;
    }
    else{
        cout<<"Tree is not symmetric."<<endl;
    }
}