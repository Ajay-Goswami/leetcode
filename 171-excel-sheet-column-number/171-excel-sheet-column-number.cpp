class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        int check;
        for(char c: columnTitle){
            check= c-'A' +1;
            ans= ans*26 +check;
        }
        return ans;
    }
};

