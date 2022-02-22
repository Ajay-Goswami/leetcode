class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i = nums.size();
        for(int j=0; j<i; j++)
        {
            int x= nums.at(j);
            nums.push_back(x);
        }
        return nums;
    }
};