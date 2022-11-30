class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i = 0; i < arr.size(); ++i) {
            mp[arr[i]]++;
        }
        for(auto i : mp) {
            ans.push_back(i.second);
        }
        sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size()-1; ++i) {
            if(ans[i] == ans[i+1]) {
                return false;
            }
        }
        return true;
    }
};