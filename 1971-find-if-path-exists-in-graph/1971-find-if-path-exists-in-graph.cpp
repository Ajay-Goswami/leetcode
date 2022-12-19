class Solution {
public:
    bool bfs(vector<int> adj[],vector<int>& vis,int s,int d ){
        queue<int> q;
        q.push(s);
        vis[s]=1;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            if(x==d)
                return true;
            for(auto it:adj[x]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<int> vis(n,0);
        return bfs(adj,vis,source,destination);
    }
};