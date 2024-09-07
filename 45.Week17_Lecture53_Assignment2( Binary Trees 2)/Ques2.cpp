#include<iostream>
#include<queue>
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
vector<int> levelOrderUsingQueues(TreeNode* root){
    vector<int> ans;
    queue<TreeNode*> q;
    q.push(root);
    while(q.size()>0){
        if(q.front()->left != NULL){
            q.push(q.front()->left);
        }
        if(q.front()->right != NULL){
            q.push(q.front()->right);
        }
        ans.push_back(q.front()->data);
        q.pop();
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
    vector<int> ans = levelOrderUsingQueues(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

 return 0;
}