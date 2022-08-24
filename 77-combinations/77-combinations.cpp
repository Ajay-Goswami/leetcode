class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subSet;
    void helper(int i, int n, int k){
        if (k == 0){
            ans.push_back(subSet);
            return;
        }
        if (k > n - i + 1)
            return;
        if (i > n)
            return;
    
        subSet.push_back(i);
        helper(i + 1, n, k - 1);
        subSet.pop_back();
        helper(i + 1, n, k);
    }
    vector<vector<int>> combine(int n, int k) {
        helper(1 , n , k) ;
        return ans;
    }
};