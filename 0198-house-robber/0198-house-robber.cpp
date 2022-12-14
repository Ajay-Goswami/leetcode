class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) 
            return nums[0];
        int prev1 = nums[0];
        int prev2 = max(prev1 , nums[1]);
        int currAns;
        for(int i = 2 ; i<n ;i++){
            currAns = max(prev1+nums[i], prev2);
            prev1 = prev2;
            prev2 = currAns;
            cout<<prev1<<" "<<prev2<<" ";
        }
        return max(prev1, prev2);
    }
};