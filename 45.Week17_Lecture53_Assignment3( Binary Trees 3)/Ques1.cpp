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


int level(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        return 1 + max(level(root->left),level(root->right));
    }
void nthLevel(TreeNode* root, int n,vector<int> &ans){
    if(root == NULL){
        return;
    }
    else if(n==1){
        ans.push_back(root->data);
        return;
    }
    nthLevel(root->left,n-1,ans);
    nthLevel(root->right,n-1,ans);
}
vector<int> leftSideView(TreeNode* root) {
    int n = level(root);
    vector<int> ans;
    for(int i=1;i<=n;i++){
        vector<int> temp;
        nthLevel(root,i,temp);
        ans.push_back(temp[0]);
    }
    return ans;
}


int main(){
    int arr[] = {4,-7,-3,INT_MIN,INT_MIN,-9,-3,9,-7,-4,INT_MIN,6,INT_MIN,-6,-6,INT_MIN,INT_MIN,0,6,5,INT_MIN,9,INT_MIN,INT_MIN,-1,-4,INT_MIN,INT_MIN,INT_MIN,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    TreeNode *root = constructTree(arr,n);
    vector<int> ans = leftSideView(root);
    cout<<"Left side view::: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

 return 0;
}
