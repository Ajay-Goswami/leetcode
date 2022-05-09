class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int x=0;
        int third=0;
        int n = nums.size();
        if((n-1)==0)
            return nums[0];
        else{
            sort(nums.begin(), nums.end());
            if((n-1)==1)
                return nums[n-1];
            else{
                for(int i=n-1; i>0; i--)
                {
                    if(nums[i]!=nums[i-1]){
                        x++;
                        third=nums[i-1];
                        if(x==2)
                            break;
                    }
                }
            }
            if(x==2)
                return third;
            else
                return nums[n-1];
        }    
    }
};