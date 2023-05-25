class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        int res = 0;
        for(auto &n: s){
            if(!s.count(n - 1)){
                int length = 1; 
                while(s.count(n + length))
                    length++;
                res = max(res, length);
            } 
        }
        return res;
    }
};