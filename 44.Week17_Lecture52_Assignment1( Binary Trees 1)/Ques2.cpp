#include<iostream>
#include<climits>
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


int minimum(TreeNode *root){
    if(root == NULL){
        return INT_MAX;
    }
    return min(root->data,min(minimum(root->left),minimum(root->right)));

}


int main(){
    TreeNode *root = new TreeNode(7);
    TreeNode *newNode1 = new TreeNode(11);
    TreeNode *newNode2 = new TreeNode(16);
    TreeNode *newNode3 = new TreeNode(3);
    TreeNode *newNode4 = new TreeNode(7);
    TreeNode *newNode5 = new TreeNode(9);
    TreeNode *newNode6 = new TreeNode(10);
    TreeNode *newNode7 = new TreeNode(4);
    TreeNode *newNode8 = new TreeNode(13);
    TreeNode *newNode9 = new TreeNode(7);
    root->left = newNode1;
    root->right = newNode2;
    newNode1->left = newNode3;
    newNode1->right = newNode4;
    newNode2->left = newNode5;
    newNode2->right = newNode6;
    newNode3->left = newNode7;
    newNode3->right = newNode8;
    newNode4->left = newNode9;
    display(root);
    cout<<endl<<"Minimum element of tree :: "<<minimum(root)<<endl;
    

 return 0;
}