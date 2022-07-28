class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int arr[9];
        arr[0]=1,arr[1]=10,arr[2]=91;
        for(int i=3;i<9;++i){
            int sum=9*9;
            int k=8;
            for(int j=i-2;j>=1;--j){
                sum=sum*k;
                k--;
            }
            arr[i]=sum+arr[i-1];
        }
        return arr[n];
    }
};