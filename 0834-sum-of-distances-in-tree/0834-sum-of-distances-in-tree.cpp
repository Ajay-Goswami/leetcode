class Solution {
public:
    void dfs(int node, int par,vector<int> conn[],vector<int>&ans, vector<int>&cnt){
        for(auto child : conn[node]){
            if(child!=par){
                dfs(child,node,conn,ans,cnt);
                cnt[node]+=cnt[child];
                ans[node]+=(ans[child]+cnt[child]);
            }
        }
        return ;
    }

    void dfss(int node, int par,vector<int> conn[],vector<int>&ans, vector<int>&cnt){
        for(auto child : conn[node]){
            if(child!=par){
                int tempx = ans[node]-(ans[child]+cnt[child]);
                int tempy = cnt[node]-cnt[child];
                ans[child] +=(tempx+tempy);
                cnt[child] +=(tempy);
                dfss(child,node,conn,ans,cnt);
            }
        }
        return ;
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<int> conn[n],ans(n,0),cnt(n,1);
        for(auto it : edges){
            conn[it[0]].push_back(it[1]);
            conn[it[1]].push_back(it[0]);
        }
        dfs(0,-1,conn,ans,cnt);
        dfss(0,-1,conn,ans,cnt);
        return ans;
    }
};