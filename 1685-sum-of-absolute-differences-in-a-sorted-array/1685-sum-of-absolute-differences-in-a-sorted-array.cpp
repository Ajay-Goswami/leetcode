class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int sum=0, Lsum=0, Lnum=0;
        for(auto x: nums)
            sum+=x;
        for(int i=0; i<n; i++){
            int Rsum = sum - Lsum -nums[i];
            int Rnum = n-1-Lnum;
            ans[i] = (Lnum*nums[i]- Lsum) + (Rsum - Rnum*nums[i]); 
            Lnum++;
            Lsum+=nums[i];
        }
        return ans;
    }
};