class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int check=0;
        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][matrix[i].size()-1]>= target){
                check=i;
                break;
            }
        }
        for(int i=0;i<matrix[check].size();i++)  
        {
            if(matrix[check][i]==target)
                return true;
        }
        return false;
    }
};
       