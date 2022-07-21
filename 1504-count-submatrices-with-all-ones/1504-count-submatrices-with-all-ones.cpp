class Solution {
public:
     int numSubmat(vector<vector<int>>& mat) {
        int ans=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(j>0 && mat[i][j]) 
                    mat[i][j]+=mat[i][j-1];
                int k=i,a=mat[i][j];
                while(k>=0 && mat[k][j]>0){
                    int m=min(a,mat[k][j]);
                    ans+=m;
                    a=m;
                    k--;
                }
            }
        }
        return ans;
    }
};




