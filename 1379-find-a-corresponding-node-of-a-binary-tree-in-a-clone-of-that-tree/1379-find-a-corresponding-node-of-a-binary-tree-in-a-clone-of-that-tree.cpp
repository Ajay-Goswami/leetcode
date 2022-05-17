/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* itr(TreeNode* original, TreeNode* cloned, TreeNode* target){
        if(!original)
            return NULL;
        if(original == target)
            return cloned;
        return max(itr(original->left, cloned->left, target), itr(original->right, cloned->right, target));
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return itr(original, cloned, target);
    }
};
