/* This question is exactly similar to Combination Sum -I.
The only difference is that we have duplicates inside the given vector arr[]
We need to skip the duplicate elements. Else they would generate Duplicate Combinations which we don't want
To skip the Duplicate Elements, we will sort arr[] and use a While Loop to skip all the Duplicate Elements
*/

class Solution {
private :

void help(int i, vector<int> &arr, int n, vector<int> &subSet, vector<vector<int>> &ans, int sum, int target) {
    if(sum == target){
        ans.push_back(subSet) ;
        return;
    }
    if(sum > target) return ;
    if(i == n) return;

    subSet.push_back(arr[i]) ;
    sum += arr[i] ;

    help(i + 1, arr, n, subSet, ans, sum, target) ;

    subSet.pop_back();
    sum -= arr[i];

    while(i + 1 < arr.size() && arr[i] == arr[i + 1]) i++ ;

    help(i + 1, arr, n, subSet, ans, sum, target) ;
}


public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> subSet ;
        vector<vector<int>> ans ;
        int sum = 0;
        int n = candidates.size() ;
        sort(candidates.begin(), candidates.end()) ;
    
        help(0, candidates, n, subSet, ans, sum, target) ;
    
        return ans ;
    }
};

