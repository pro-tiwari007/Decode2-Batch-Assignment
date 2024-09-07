#include<iostream>
#include<climits>
#include<queue>
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

TreeNode* constructTree(int arr[],int n){
    TreeNode* root = new TreeNode(arr[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i=1,j=2;
    while(q.size()>0 && i<n){
        TreeNode *leftNode = (arr[i] != INT_MIN)?(new TreeNode(arr[i])):(NULL);
        TreeNode *rightNode = (arr[j] != INT_MIN && j != n)?(new TreeNode(arr[j])):(NULL);
        q.front()->left = leftNode;
        q.front()->right = rightNode;
        if(leftNode != NULL){
            q.push(leftNode);
        } 
        if(rightNode != NULL){
            q.push(rightNode);
        } 
        q.pop();
        i+=2;
        j+=2;
    }
    return root;
}

bool hasPathSum(TreeNode* root, int targetSum){
    if(root == NULL){
        return false;
    }
    if(root->left == NULL && root->right == NULL){
        if(root->data == targetSum){
            return true;
        }
        else{
            return false;
        }
    }
    return hasPathSum(root->left,targetSum-root->data) || hasPathSum(root->right,targetSum-root->data);
}

int main(){
    int arr[] = {5,4,8,11,INT_MIN,13,4,7,2,INT_MIN,INT_MIN,INT_MIN,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    TreeNode *root = constructTree(arr,n);
    int target = 22;
    if(hasPathSum(root,target)){
        cout<<"Tree have a root to leaf path with sum ("<<target<<")"<<endl;
    }
    else{
        cout<<"No root to leaf path with sum :"<<target<<endl;
    }

 return 0;
}
