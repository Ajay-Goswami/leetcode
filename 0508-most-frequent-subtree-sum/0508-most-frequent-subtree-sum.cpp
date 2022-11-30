class Solution {
public: 
    unordered_map<int, int> mp;
    int max_count = 0;
    
    int dfs(TreeNode* root){
        if(root == NULL)
            return 0;
        
        int left_sum = dfs(root -> left);
        int right_sum = dfs(root -> right);
        int total_sum = root -> val + left_sum + right_sum;
        mp[total_sum]++;
        max_count = max(max_count, mp[total_sum]);
        
        return total_sum;
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int> res;
        
        for(auto x : mp)
            if(x.second == max_count)
                res.push_back(x.first);
        
        return res;
    }
};