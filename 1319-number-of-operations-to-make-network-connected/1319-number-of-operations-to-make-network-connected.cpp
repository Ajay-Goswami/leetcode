class Solution {
	private:
        void dfs(int src, vector<vector<int>>& edges, vector<bool>& vis){
            vis[src] = true;
            for(auto x:edges[src])
                if(!vis[x])
                    dfs(x, edges, vis);
            return;
        }
	public:
        int makeConnected(int n, vector<vector<int>>& connections) {
            int size = connections.size();
            if(size<n-1)
                return -1;
            vector<bool> vis(n, false);
            vector<vector<int>> edges(n);
            for(auto x:connections){ 
                edges[x[0]].push_back(x[1]);
                edges[x[1]].push_back(x[0]);
            }
            int count = 0;
            for(int i=0;i<n;i++){
                if(!vis[i]){
                    count++;
                    dfs(i, edges, vis);
                }
            }
            return count-1;
        }
};