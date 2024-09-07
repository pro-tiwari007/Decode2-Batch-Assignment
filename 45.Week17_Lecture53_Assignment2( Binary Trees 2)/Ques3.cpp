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


int levels(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    return 1 + max(levels(root->left),levels(root->right));
}
void printNthLevelRightToLeft(TreeNode* root,int n,vector<int> &ans){
    if(root == NULL){
        return;
    }
    else if(n==1){
        ans.push_back(root->data);
        return;
    }
    printNthLevelRightToLeft(root->right,n-1,ans);
    printNthLevelRightToLeft(root->left,n-1,ans);
}
vector<vector<int>> levelOrderRightToLeft(TreeNode* root){
    int n = levels(root);
    vector<vector<int>> ans;
    for(int i=1;i<=n;i++){
        vector<int> temp;
        printNthLevelRightToLeft(root,i,temp);
        ans.push_back(temp);
    }
    return ans;
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
    vector<vector<int>> ans = levelOrderRightToLeft(root);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

 return 0;
}