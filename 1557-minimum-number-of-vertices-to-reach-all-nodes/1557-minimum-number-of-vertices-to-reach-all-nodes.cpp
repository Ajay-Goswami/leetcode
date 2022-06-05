class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        vector<int>in(n, 0);
        vector<int>out(n, 0);
        for(int i=0;i<edges.size();i++){
            out[edges[i][0]]++;
            in[edges[i][1]]++;
        }
        for(int i=0;i<n;i++){
            if(in[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

