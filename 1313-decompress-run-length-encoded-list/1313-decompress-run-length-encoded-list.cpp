class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> out;
        int x;
        for(int i=0; i<nums.size(); i+=2)
        {
            x= nums[i];
            for(int j=0; j<x; j++)
            {
                out.push_back(nums[i+1]);
            }
        }
        return out;
    }
};