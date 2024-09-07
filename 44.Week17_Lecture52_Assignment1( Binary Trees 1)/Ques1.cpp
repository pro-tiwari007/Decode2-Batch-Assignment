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
    cout << root->data << " ";
    display(root->left);
    display(root->right);
}


int product(TreeNode *root){
    if(root == NULL){
        return 1;
    }
    return (root->data) * product(root->left) *product(root->right);
}




int main(){
    TreeNode *root = new TreeNode(1);
    TreeNode *newNode1 = new TreeNode(2);
    TreeNode *newNode2 = new TreeNode(3);
    TreeNode *newNode3 = new TreeNode(4);
    TreeNode *newNode4 = new TreeNode(5);
    TreeNode *newNode5 = new TreeNode(6);
    TreeNode *newNode6 = new TreeNode(7);
    TreeNode *newNode7 = new TreeNode(8);
    TreeNode *newNode8 = new TreeNode(9);
    TreeNode *newNode9 = new TreeNode(10);
    root->left = newNode1;
    root->right = newNode2;
    newNode1->left = newNode3;
    newNode1->right = newNode4;
    newNode2->left = newNode5;
    newNode2->right = newNode6;
    newNode3->left = newNode7;
    newNode4->left = newNode8;
    newNode4->right = newNode9;
    display(root);
    cout<<endl<<"Product of all elements of tree :: "<<product(root)<<endl;
    

 return 0;
}