class Solution {
public:
    void helper(int pos, int n, vector<int> & nums, vector<vector<int>> & ans){
        if(pos>=n){
            ans.push_back(nums);
            return;
        }
        set<int> s;
        for(int i=pos; i<n; i++){
            if(s.find(nums[i]) != s.end() )
                continue ;
            s.insert(nums[i]) ;
            
            swap(nums[i], nums[pos]);
            helper(pos+1, n, nums, ans);
            swap(nums[i], nums[pos]);
        }
        return;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(0,nums.size(), nums, ans);
        return ans;
    }
};