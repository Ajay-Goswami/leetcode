class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3)
            return false;
        int left= INT_MAX;          //for ith element
        int mid= INT_MAX;           //for jth element
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>mid)         //nums[i] is used for kth element
                return true;
            else if(nums[i]>left && nums[i]<mid)
                mid= nums[i];
            else if(nums[i]<left)
                left= nums[i];
        }
        
        return false;
    }
};
