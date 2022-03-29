class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int prev=INT_MIN,x;
        sort(nums.begin(), nums.end());
        
        for (int i=0; i<nums.size(); i++){
            if(nums[i]==prev){
                x=i;
                break;
            }
            prev=nums[i];
        }
        return nums[x];
    }
};