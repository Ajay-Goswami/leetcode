class Solution {
public:
    vector<vector<int>> ans;
    void help(int i, vector<int> &nums, vector<int> &temp, bool prev){
        if(i==nums.size()){
           ans.push_back(temp); 
        }
        else{
            //skip ith element
            help(i+1,nums, temp,false);
            
            if(i>0 && nums[i]==nums[i-1] && (!prev))
                return;
            temp.push_back(nums[i]);
            //take ith element
            help(i+1, nums,temp,true);
            
             temp.pop_back();
        }
    }
    vector<vector<int>>  subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        help(0,nums, temp,false);
        return ans;
    }
};