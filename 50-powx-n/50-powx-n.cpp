class Solution {
public:
    double myPow(double x, int n) {
        double result=1;
        long long p=n;
        if(p<0)
            p=-p;
        while(p>0)
        {
            if(p%2==1)
            {
                result*=x;
                p=p-1;
            }
            else{
                x=x*x;
                p=p/2;
            }
        }     
        if(n<0) 
            result= (double)(1.0)/(double)(result);
        return result;
    }
};


   
