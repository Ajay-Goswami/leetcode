class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        else if(n%2!=0)
            return false;
        else{
            int i=1;
            while(pow(2,i)<=n){
                if(pow(2,i)==n)
                    return true;
                i++;
            }
        }
        return false;
    }
};