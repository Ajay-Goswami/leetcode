class Solution {
public:
    int subtractProductAndSum(int n) {
        long long int res=1;
        int sum=0;
        while(n>0){
            int x=0;
            x=n%10;
            res*=x;
            sum+=x;
            n/=10;
        }
        return res-sum;
    }
};