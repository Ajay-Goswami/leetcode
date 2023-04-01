class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index=0, l=0, h=nums.size()-1;
        while(l<=h){
            index=(l+h)/2;
            if(nums[index]==target)
                return index;
            else if(nums[index]<target){
                l=index+1;
            }
            else{
                h=index-1;
            }
        }
        return -1;
    }
};