class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int x=0,sum=0,y=0;
        int m=INT_MIN;
        double avg;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            x++;
            if(x==k){
                if(m<sum)
                    m=sum;
                x--;
                sum-=nums[y];
                y++;
            }
        }
        avg=m/(double)k;
        return avg;
    }
};