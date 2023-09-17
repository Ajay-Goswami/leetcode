class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[](int x,int y){
            int a =  __builtin_popcount(x), b = __builtin_popcount(y);
            return a==b ? x<y : b>a;
        }); 
        return arr;
    }
};