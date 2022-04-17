class Solution {
public:
    int arrangeCoins(int n) {
        if(n<=0)
            return 0;
        
        int count=1;
        while(n>0){
            n=n-count;
            if(n-count<=0)
                break;
            count++;
        }
            return count;
    }
};