class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& eq, vector<double>& values, vector<vector<string>>& q) {
        unordered_map<string, int> map;
        int k = 1;
        for(int i=0;i<eq.size();i++){
            if(map[eq[i][0]]==NULL){ 
                map[eq[i][0]] = k;
                k++;
            }if(map[eq[i][1]]==NULL){
                map[eq[i][1]] = k;
                k++;
            }
        }
        vector<double> r(map.size(),0);
        vector<vector<double>> m(map.size(), r);
        
        for(int i=0;i<eq.size();i++){
            m[map[eq[i][0]]-1][map[eq[i][0]]-1] = 1;
            m[map[eq[i][1]]-1][map[eq[i][1]]-1] = 1;
            m[map[eq[i][0]]-1][map[eq[i][1]]-1] = values[i]; 
            m[map[eq[i][1]]-1][map[eq[i][0]]-1] = 1/values[i];
        }
        //update the matrix
        for(int j=0;j<m.size();j++){
            for(int i=0;i<m.size();i++){
                if(m[i][j]==0) continue;
                for(int p=i+1;p<m.size();p++){
                    if(m[p][j]==0) continue;
                    m[i][p] = m[i][j]/m[p][j];
                    m[p][i] = 1/m[i][p];
                }
            }
        }
        vector<double> ans;    
        for(int i=0;i<q.size();i++){
            if(map[q[i][0]]==0||map[q[i][1]]==0){
                ans.push_back(-1);
            }else{
                double t = m[map[q[i][0]]-1][map[q[i][1]]-1];
                if(t==0) ans.push_back(-1);
                else ans.push_back(t);
            }
        }
        return ans;
    }
};