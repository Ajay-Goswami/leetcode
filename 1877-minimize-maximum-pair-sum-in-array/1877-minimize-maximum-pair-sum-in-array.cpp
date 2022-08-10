class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0,s=0,e=n-1;
        while(s<e)
        {
           int sum=nums[s]+nums[e];
            s++;
            e--;
            ans=max(ans,sum);
        }
        return ans;
    }
};