class Solution {
public:
    void helper (int pos, int n, vector<int> &nums,vector<vector<int>> &ans){
        if(pos>=nums.size()){
            ans.push_back(nums) ;
            return ;
        }

        for(int i = pos ; i < n ; i++){
            swap(nums[pos] , nums[i]) ;
            helper(pos + 1 , n , nums , ans) ;
            swap(nums[pos] , nums[i]) ;
        }
        return ;    
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(0,nums.size(), nums, ans);
        return ans;
    }
};