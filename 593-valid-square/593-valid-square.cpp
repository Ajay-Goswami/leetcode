class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
         vector<vector<int>> points = {p1, p2, p3, p4};
        set<int> distances;
        
        for(int i = 0; i<4; ++i){
            for(int j = i+1; j<4; ++j){
                int x1 = points[i][0];
                int y1 = points[i][1];
                int x2 = points[j][0];
                int y2 = points[j][1];
                if(x1 == x2 && y1 == y2){return false;}
                
                distances.insert(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
            }
        }
       
        return distances.size() > 2 ? false : true;
    }
};