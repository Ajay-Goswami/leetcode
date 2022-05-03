class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int min= INT_MAX;
        int max= INT_MIN;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]>nums[i+1])
                min=std::min(min,nums[i+1]);
        }
        for(int i=nums.size()-1; i>0; i--)
        {
            if(nums[i]<nums[i-1])
                max=std::max(max,nums[i-1]);
        }
        int l=0, r=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>min){
                l=i;
                break;
            }
        }
        for(int i=nums.size()-1; i>=0; i--)
        {
            if(nums[i]<max){
                r=i;
                break;
            }
        }
        
        return r-l>0?r-l+1:0;
    }
};