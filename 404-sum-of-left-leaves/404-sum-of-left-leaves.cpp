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
    bool isLeafNode(TreeNode* root){
        if(root->left ==NULL  && root->right==NULL)
            return true;
        return false;
    }
    void LeftSum(TreeNode* root , int &sum){
        if(!root)
            return;
        if(root->left && isLeafNode(root->left))
            sum+=root->left->val;
        LeftSum(root->left,sum);
        LeftSum(root->right, sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        LeftSum(root,sum);
        return sum;
    }
};