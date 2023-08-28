class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int len = nums.size();
        if(k > len)
            return false;
        int sum = 0;
        for(auto n : nums)
            sum += n;
        if(k > sum || sum%k != 0)
            return false;
        int target = sum/k;        
        vector<bool> used(len, false);;
        sort(nums.begin(), nums.end(), greater());
        return backtrack(nums, k, 0, 0, target, used);
    }
    
    bool backtrack(vector<int>& nums, int k, int start, int bucket, int target, vector<bool>& used){
        int len = nums.size();
        if(k == 0)
            return true;
        if(bucket > target)
            return false;
        
        if(bucket == target)
            return backtrack(nums, k-1, 0, 0, target, used);
        for(int i = start; i < len; i++){
            if(used[i])
                continue;
            used[i] = true;
            if(backtrack(nums, k, i + 1, bucket + nums[i], target, used))
                return true;
            used[i] = false;
            if(bucket == 0)
                break;
        }
        return false;
    }
};