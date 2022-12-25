class Solution {
public:
    vector<int> prefix(vector<int> nums){
        int n = nums.size();
        vector<int> pre(n);
        pre[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
            pre[i] = pre[i - 1] + nums[i];
        return pre;
    }
    
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        vector<int> pre = prefix(nums);
    
        for (auto &it : queries){
            int ind = upper_bound(pre.begin(), pre.end(), it) - pre.begin();
            ans.push_back(ind);
        }  
        return ans;
    }
};