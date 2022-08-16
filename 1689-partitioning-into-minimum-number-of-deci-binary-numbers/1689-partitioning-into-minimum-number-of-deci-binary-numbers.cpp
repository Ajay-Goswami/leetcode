class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(char x:n){
            //ascii value of 0-> 48 and 9-> 57
            int curr = x-48;
            ans= max(ans,curr);
        }
        return ans;
    }
};