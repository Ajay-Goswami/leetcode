class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_set<string> u(ideas.begin(), ideas.end());
        unordered_map<char, unordered_map<char,int>> mp;
        for (auto& str : u){
            string s = str;
            char prev = s[0];
            for (char c = 'a'; c <= 'z'; ++c){
                s[0] = c;
                if (u.find(s) == u.end())
                 ++mp[c][prev];
            }
        }
        long long result = 0;
        for (auto& str : u){
            string s = str;
            char prev = s[0];
            for (char c = 'a'; c <= 'z'; ++c){
                s[0] = c;
                if (u.find(s) == u.end())
                 result += mp[prev][c];
            }
        }
        return result;
    }
};