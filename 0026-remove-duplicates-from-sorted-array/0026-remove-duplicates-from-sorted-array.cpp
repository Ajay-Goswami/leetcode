class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++)
        {
            int x=i+1;
            if(nums[i]==nums[x]){
                nums.erase(nums.begin()+x);
                i--;
            }
        }
        return nums.size();
    }
};