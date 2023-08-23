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
    int goodNodes(TreeNode* root) {
        int count =0;
        if(!root)
            return count;
        countgoodnodes(root,count, root->val);
        return count;
    }
    void countgoodnodes(TreeNode * root, int &count, int m){
        if(!root)
            return;
        if(root->val >= m){
            count++;
            m= root->val;
        }
        countgoodnodes(root->left,count,m);
        countgoodnodes(root->right,count,m);
    }
};