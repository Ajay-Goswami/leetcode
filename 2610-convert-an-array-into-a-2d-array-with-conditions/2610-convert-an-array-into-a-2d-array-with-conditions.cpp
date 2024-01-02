class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        map<int, int> m;
        for (auto &i : nums)
            m[i]++;
        while (!m.empty()){
            vector<int> v;
            vector<int>x;
            for (auto i : m){
                v.push_back(i.first);
                m[i.first]--;
                if (m[i.first] == 0)
                    x.push_back(i.first);
            }
            ans.push_back(v);
            for(auto &i : x)
                m.erase(i);
        }
        return ans;
    }
};