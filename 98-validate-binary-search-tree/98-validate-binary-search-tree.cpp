class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isBST(root, LLONG_MIN, LLONG_MAX);
    }
    
    bool isBST(TreeNode *root, long long minVal, long long maxVal){
        if(root == NULL)
            return true;
        if((long long)root->val >= maxVal || (long long)root->val <= minVal)
            return false;
        return isBST(root->left, minVal, root->val) && isBST(root->right, root->val, maxVal);
    }
};