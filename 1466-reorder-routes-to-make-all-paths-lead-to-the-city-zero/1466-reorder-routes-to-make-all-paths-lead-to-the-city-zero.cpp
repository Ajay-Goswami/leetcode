class Solution {
public:
    int minReorder(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        vector<int> back_adj[n];
        
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            
            adj[u].push_back(v);
            back_adj[v].push_back(u);
        }
        
        queue< int> q;
        q.push(0);
        
        vector<bool> visited(n , false);
        visited[0]=true;
        
        int ans=0;
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto x : adj[node]){
                if(visited[x]==false){
                    q.push(x);
                    visited[x]=true;
                    ans++;
                }
            }
            for(auto x : back_adj[node]){
                if(visited[x]==false){
                    q.push(x);
                    visited[x]=true;
                }
            }
        }
        return ans;
    }
};