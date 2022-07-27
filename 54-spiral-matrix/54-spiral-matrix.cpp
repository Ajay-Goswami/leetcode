class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>output;
        int top=0,right=matrix[0].size()-1,bottom=matrix.size()-1,left=0;
        while(left<=right && top<=bottom){
                
            for(int i{left};i<=right;++i){
                output.push_back(matrix.at(top).at(i));
            }
            top++;
            for(int i{top};i<=bottom;++i){
                output.push_back(matrix.at(i).at(right));
            }
            right--;
            if(top<=bottom){
                for(int i{right};i>=left;--i){
                    output.push_back(matrix.at(bottom).at(i));
                }
                bottom--;
            }
            if(left<=right){
                for(int i{bottom};i>=top;--i){
                    output.push_back(matrix.at(i).at(left));
                }
                left++;
            }
        }
        
        return output;
    }
};