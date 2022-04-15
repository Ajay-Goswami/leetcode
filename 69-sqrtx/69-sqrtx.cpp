class Solution {
public:
    int mySqrt(int x) {
        long long int start = 0, end = x-1;
        long long int mid = start + (end-start)/2;
        
        if(x == 0 || x == 1) {
            return x;
        }
        
        while(start <= end) {
            if(mid*mid == x) {
                return mid;
            }
            else if((mid-1)*(mid-1) < x && mid*mid > x) {
                return mid-1;
            }
            else if(mid*mid < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
            mid = start + (end-start)/2;
        }
        return 1;

    }
};