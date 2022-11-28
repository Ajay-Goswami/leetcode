class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans(2);
        
        set<int> win;
        map<int, int> loss;
        
        for (const vector<int>& match : matches) {
            win.insert(match[0]);
            ++loss[match[1]];
        }
        
        for (int p : win)
            if (loss.find(p) == end(loss)) 
                ans[0].push_back(p);
        
        for (auto [p, l] : loss)
            if (l == 1) 
                ans[1].push_back(p);
        
        return ans;
    }
};