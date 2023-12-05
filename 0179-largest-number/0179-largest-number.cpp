class Solution {
public:
    static bool compare(const int& a, const int& b) {
        return to_string(a) + to_string(b) > to_string(b) + to_string(a);
    }

    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compare);
        if (nums[0] == 0) {
            return "0"; 
        }
        
        string result = "";
        for (int num : nums) {
            result += to_string(num);
        }
        
        return result;
    }
};