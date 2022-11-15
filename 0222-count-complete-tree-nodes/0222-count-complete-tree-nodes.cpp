class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root)
            return 0;
        int left_level=1;
        TreeNode* l= root->left;
        while(l){
            l=l->left;
            left_level+=1;
        }
        int right_level=1;
        TreeNode* r= root->right;
        while(r){
            r=r->right;
            right_level+=1;
        }
        if(left_level==right_level){
            return pow(2,left_level)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};