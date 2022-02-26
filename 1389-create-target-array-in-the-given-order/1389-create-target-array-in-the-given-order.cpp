class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> output;
        for (int i=0; i<index.size(); i++)
        {
          auto itPos = output.begin() + index[i];;
            output.insert(itPos, nums[i]);
        }
        return output;
    }
};

