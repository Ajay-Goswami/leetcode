class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) 
            return INT_MAX;
        bool sign = (dividend>=0) == (divisor >=0) ? true : false;
        
        long dividend1 = abs(dividend);
        long divisor1 = abs(divisor);
        long result=0;
        
        while(dividend1 >= divisor1 ){
            long divisor2=divisor1;
            long divisorMultipliedBy = 1;
            
            while(dividend1 >= (divisor2 << 1)){
                divisor2 = divisor2 << 1;
                divisorMultipliedBy = divisorMultipliedBy << 1;
            }
            
            result += divisorMultipliedBy;
            dividend1 -= divisor2;
        }
        
        return sign?result: -result ;
    }
};
