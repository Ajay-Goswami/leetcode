class Solution {
public:
        bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> col(n , -1);
        queue<vector<int>> q;
        for(int i=0 ; i< n; i++){
            if(col[i] == -1){
                q.push({i,0});
                while(!q.empty()){
                    auto it = q.front();
                    q.pop();
                    if(col[it[0]] == -1){
                        col[it[0]] = it[1];

                        for(auto e: graph[it[0]]){
                            q.push({e , it[1] ^ 1 });
                        }

                    }
                    else{
                        if(col[it[0]] != it[1]){
                            return false;
                        }
                    }
                }
            }
        }
        
        
        return true;
    }
};