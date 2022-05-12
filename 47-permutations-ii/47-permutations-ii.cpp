class Solution {
public:
    vector<vector<int>>ans;
    void per(vector<int>&nums, int i){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int j=i; j<nums.size(); j++){
            if(s.find(nums[j])!=s.end())continue;
                s.insert(nums[j]);
            swap(nums[i],nums[j]);
            per(nums, i+1);
            swap(nums[i],nums[j]);
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        per(nums, 0);
        return ans;
    }
};