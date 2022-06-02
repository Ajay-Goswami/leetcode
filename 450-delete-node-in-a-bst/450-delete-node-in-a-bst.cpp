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
    int findmax(TreeNode* root, int maxim){
       while(root !=NULL){
           maxim = max(maxim, root->val);
           root = root->right;
       }
        return maxim;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) 
            return NULL;
        
        if(root->val < key){
            root->right = deleteNode(root->right, key);
        }else if(root->val > key){
            root->left = deleteNode(root->left, key);
        }else{
            if(root->left != NULL && root->right != NULL){
                int v = findmax(root->left, INT_MIN);
                root->val = v;
                root->left = deleteNode(root->left, v);
                return root;
            }else if(root->left != NULL){
                return root->left;
            }else if(root->right != NULL){
                return root->right;
            }else{
                return NULL;
            }
            
        }
        return root;
    }
};

