class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        ans.push_back(0);
        int m = 0;
        for(int i=0; i<gain.size(); i++){
            int temp= ans[i] + gain[i];
            ans.push_back(temp);
            temp>m ? m=temp: m=m;
        }
        return m;
    }
};