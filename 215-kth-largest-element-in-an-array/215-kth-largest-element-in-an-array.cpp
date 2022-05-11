class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int val =0;
        for(int i=nums.size()-1, x=1; i>=0; i--,x++){
            if(x==k)
            {
                val=nums[i];
                break;
            }
        }
        return val;
    }
};