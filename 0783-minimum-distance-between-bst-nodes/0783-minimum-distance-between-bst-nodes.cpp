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
    vector<int> res;

    void inorder(TreeNode* root){
        if(root->left)
            inorder(root->left);
        res.push_back(root->val);
        if(root->right)
            inorder(root->right);
        return;
    }

    int minDiffInBST(TreeNode* root) {
        inorder(root);
        int diff=INT_MAX;
        for(int i=1;i<res.size();i++){
            diff=min(diff,(res[i]-res[i-1]));
        }
        return diff; 
    }
};