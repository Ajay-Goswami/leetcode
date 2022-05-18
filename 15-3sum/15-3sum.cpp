class Solution {
    vector<vector<int>> res;
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // if((nums.size() == 0) || (nums.size() == 1))
        //     return {};
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            //check for duplicate a
            if( i==0 || nums [i-1]!=nums[i]){
                twoSum(i+1,nums.size()-1, nums, 0-nums[i]);         //a+b+c=0  => b+c=0-a
            }
        }
        return res;
    }
    
    void twoSum(int i, int j, vector<int> nums, int target){
        int a1 = nums[i-1];
        while(i<j){
            if(nums[i]+nums[j]>target)
                j--;
            else if(nums[i]+nums[j]<target)
                i++;
            else{
                vector<int> v;
                v.push_back(a1);
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                
                res.push_back(v);
                
                // check for duplicate b
                while(i<j && nums[i]==nums[i+1])
                    i++;
                //check for duplicate c
                while(i<j && nums[j]==nums[j-1])
                    j--;
                
                i++,j--;
            }
        }
    }
};