class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
         vector<int> temp(n+1,0);
        for(auto x:trust){
            temp[x[0]]--;//indegree
            temp[x[1]]++;//outdegree
        }
        for(int i=1;i<n+1;i++){
            if(temp[i]==n-1)
                return i;
        }
        return -1;
    }
};