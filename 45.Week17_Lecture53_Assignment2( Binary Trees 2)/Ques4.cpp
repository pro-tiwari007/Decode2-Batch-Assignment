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
void nthLevelPrint(TreeNode* root, int n, vector<int> &ans){
    if(root == NULL){
        return;
    }
    else if(n==1){
        ans.push_back(root->data);
        return;
    }
    nthLevelPrint(root->left,n-1,ans);
    nthLevelPrint(root->right,n-1,ans);
}

void nthLevelReversePrint(TreeNode* root, int n, vector<int> &ans){
    if(root == NULL){
        return;
    }
    else if(n==1){
        ans.push_back(root->data);
        return;
    }
    nthLevelReversePrint(root->right,n-1,ans);
    nthLevelReversePrint(root->left,n-1,ans);
}
vector<vector<int>> zigZagOrderPrint(TreeNode* root){
    vector<vector<int>> ans;
    int n = levels(root);
    int i=1;
    while(i<=n){
        vector<int> temp;
        nthLevelPrint(root,i,temp);
        ans.push_back(temp);
        i++;
        if(i<=n){
            vector<int> temp1;
            nthLevelReversePrint(root,i,temp1);
            ans.push_back(temp1);
        }
        i++;
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

    vector<vector<int>> nLevel = zigZagOrderPrint(root);
    for(int i=0;i<nLevel.size();i++){
        for(int j=0;j<nLevel[i].size();j++){
            cout<<nLevel[i][j]<<" ";
        }
        cout<<endl;
    }
    

 return 0;
}