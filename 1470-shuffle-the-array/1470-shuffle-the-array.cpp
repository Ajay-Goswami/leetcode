class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> output = nums;
        for (int i=0; i<n; i++)
        {
            if(i%2==0)
                output[i]=nums[(i+1)/2];
            else 
            { 
                output[i]=nums[n]; 
                n++;
            }
        }
        return output;
    }
};