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








int ans = 0;
int diameter(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    int leftAns = diameter(root->left);
    int rightAns = diameter(root->right);
    ans = max(ans, leftAns + rightAns + 1);
    return max(leftAns,rightAns)+1;
}
int diameterOfBinaryTree(TreeNode* root){
    diameter(root);
    return ans-1;
}






int main(){
    int arr[] = {4,-7,-3,INT_MIN,INT_MIN,-9,-3,9,-7,-4,INT_MIN,6,INT_MIN,-6,-6,INT_MIN,INT_MIN,0,6,5,INT_MIN,9,INT_MIN,INT_MIN,-1,-4,INT_MIN,INT_MIN,INT_MIN,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    TreeNode *root = constructTree(arr,n);
    
    cout<<"Diameter of binary tree:: "<<diameterOfBinaryTree(root);

 return 0;
}