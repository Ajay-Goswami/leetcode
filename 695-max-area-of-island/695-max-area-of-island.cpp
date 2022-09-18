class Solution {
public:
    int area=0;
    void dfs(vector<vector<int>>&grid,int i,int j)
    {
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]==0)
            return;
        area++;
        grid[i][j]=0;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        if(n==0){return 0;}
        int maximumArea=0;

        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(grid[i][j]==1)
                {
                    area=0;
                    dfs(grid,i,j);
                    if(area>maximumArea){maximumArea=area;}
                }
            }
        }
        return maximumArea;
    }
};