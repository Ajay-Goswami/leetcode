class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int sum= 0;
        for(int i=0; i<nums.size(); i++)
        {
            // nums.at(i)=nums[i]+sum;
            sum+= nums[i];
            nums.at(i)=sum;
        }
        return nums;
    }
};