class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        int vis[n];
        for(int i=0;i<n;i++){
            vis[i] = -1;
        }
        queue<int>q;
        q.push(0);
        vis[0] = 1;
        while(!q.empty()){
            int room = q.front();
            
            vis[room] = 1;
            for(int i=0;i<rooms[room].size(); i++){
                if(vis[rooms[room][i]]!=1)
                    q.push(rooms[room][i]);
            }    
            
            q.pop();
        }
        for(int i=0;i<n;i++){
            if(vis[i]!=1){
                return false;
            }
        }
        return true;
    }
};

