class Solution {
public:
    int numSquares(int n) {
       int arr[n+1];
        for(int i=0; i<=n; i++){
            arr[i]=i;
        }
        for(int i=4; i<=n; i++){
            for(int j=1; j*j<=i; j++)
                arr[i] = min(arr[i],1+arr[i-j*j]);
        }
        return arr[n];
    }
};