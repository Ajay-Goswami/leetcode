class Solution {
public:
    vector<vector<int>> ans;
    void help(int i, vector<int> &nums, vector<int> &temp){
        if(i==nums.size()){
           ans.push_back(temp); 
        }
        else{
            temp.push_back(nums[i]);
            //take ith element
            help(i+1, nums,temp);
            
            temp.pop_back();
            //skip ith element
            help(i+1,nums, temp);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        help(0,nums, temp);
        return ans;
    }
};