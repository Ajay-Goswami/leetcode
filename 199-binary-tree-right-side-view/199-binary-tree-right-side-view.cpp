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
    vector<int> output;
    vector<int> rightSideView(TreeNode* root) {
        check(root,0);
        return output;
    }
    
    void check(TreeNode * root, int level){
        if(root==NULL)
            return ;
        if(output.size()==level)
            output.push_back(root->val);
        check(root->right, level+1);
        check(root->left, level+1);
    }
};