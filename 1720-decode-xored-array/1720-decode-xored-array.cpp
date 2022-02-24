class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        //vector<int> ans(1, first);
        vector<int> ans{{first}};
        int prev = first;
        for(int e: encoded){
            //prev ^ x = e;  // x is the current item for ans
            int x = prev ^ e;
            prev = x;
            ans.push_back(x);
        }
        return ans;        
    }
};