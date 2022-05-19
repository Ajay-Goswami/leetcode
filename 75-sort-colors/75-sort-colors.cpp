class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        int p=0,q=n-1;
        while(i<=q){
            if(nums[i]==0)
                swap(nums[i++],nums[p++]);
            else if(nums[i]==1)
                i++;
            else
                swap(nums[i],nums[q--]);
        }
    }
};
