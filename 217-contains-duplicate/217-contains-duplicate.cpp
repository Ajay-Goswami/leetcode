class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int prev=INT_MIN;
        int x=0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==prev)
            {
                x=1;
                break;
            }
            prev=nums[i];
        }
        if(x==1)
            return true;
        else
            return false;
    }
};