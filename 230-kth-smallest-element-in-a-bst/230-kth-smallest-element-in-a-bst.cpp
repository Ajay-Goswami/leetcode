/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> v;
    void inorderTraversal(TreeNode* root){
        if(!root)
            return;
        inorderTraversal(root->left);
        v.push_back(root->val);
        inorderTraversal(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        int x=0;
        inorderTraversal(root);
        x=v[k-1];
        return x;
    }
};

// int cnt=0,ans=-1;
//     void traverse(TreeNode* root,int k){
//         if(root==NULL)  return;     //if recahes NULL return
//         if(ans!=-1)  return;        //once we will get the ans than no need to traverse further
//         traverse(root->left,k);
//         cnt++;
//         if(cnt==k){
//             ans=root->val;  return; 
//         }
//         traverse(root->right,k);
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         traverse(root,k);
//         return ans;
