class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> n;
        for(int i=0; i<nums.size();i++)
        {
            int count =0;
            for(int j=0; j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                    count++;
            }
            n.push_back(count);
        }
        return n;
    }
};