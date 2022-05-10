class Solution {
public:
    void solve(int st,vector<vector<int>>& ans,vector<int>& temp,int k,int n){
        if(n==0 and temp.size()==k){ 
            ans.push_back(temp);
            return;
        }
        for(int i=st;i<=9;i++){
            temp.push_back(i);
            solve(i+1,ans,temp,k,n-i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>> ans;
        solve(1,ans,temp,k,n);
        return ans;
    }
};