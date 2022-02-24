class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans{{first}};
        int prev = first;
        for(int e: encoded){
            int x = prev ^ e;
            prev = x;
            ans.push_back(x);
        }
        return ans;        
    }
};