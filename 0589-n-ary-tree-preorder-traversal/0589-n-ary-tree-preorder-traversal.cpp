class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> ans;
        preTraversal(root, ans);
        return ans;
    }
    void preTraversal(Node* root, vector<int>& ans){
        if(!root) 
            return;                 
        ans.push_back(root -> val);       
        for (auto& child : root -> children) 
            preTraversal(child, ans); 
    }
};