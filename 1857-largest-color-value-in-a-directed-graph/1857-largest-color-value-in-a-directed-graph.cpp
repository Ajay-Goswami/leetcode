class Solution {
    vector<int> adj[100001];
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n=colors.size();
        vector<int> inDegree(n,0);
        vector<vector<int>> dp(n,vector<int>(26,0));
        for(auto edge: edges){
            adj[edge[0]].push_back(edge[1]);
            inDegree[edge[1]]++;
        }
        queue<int> q;
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++)
            if(inDegree[i]==0)
                q.push(i);
        int res=0;
        int V=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int curr=q.front();
                q.pop();
                V++;
                vis[curr]=true;
                dp[curr][colors[curr]-'a']++;  // taking the current color
                for(int i=0;i<26;i++)
                    res=max(res,dp[curr][i]);  // getting the max this node has to offer
                for(auto nei: adj[curr]){
                    inDegree[nei]--;
                    if(inDegree[nei]==0)
                        q.push(nei);
                    for(int i=0;i<26;i++)
                        dp[nei][i]=max(dp[nei][i],dp[curr][i]);  
                }
            }
        }
        if(V!=n)
            return -1; //cycle
        return res;
    }
};   