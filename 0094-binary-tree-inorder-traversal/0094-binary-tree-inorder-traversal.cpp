class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode * curr = root;
        vector<int> ans;
        while(curr){
            if(curr->left){
                TreeNode *temp = curr->left;
                
                while(temp->right && temp->right!=curr)
                    temp= temp->right;
                if(temp->right== NULL){
                    temp->right = curr;
                    curr = curr->left;
                }
                else{
                    ans.push_back(curr->val);
                    curr= curr->right;
                    temp->right = NULL;
                }
            }
            else{
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
        return ans;
    }
};

