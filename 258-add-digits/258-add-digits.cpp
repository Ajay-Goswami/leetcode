class Solution {
public:
    int addDigits(int num) {
        int sum=num;
        while(sum>9)
        {
            sum=sum_of_digits(sum);
        }
          return sum;
    }
    int sum_of_digits(int num)
    {
        int s=0;
        while(num>0)
        {
            int r=num%10;
            s=s+r;
            num=num/10;
        }
        return s;
    }
};