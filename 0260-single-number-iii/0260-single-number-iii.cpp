class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {        
        int n = nums.size();
        int xorr = 0;
        for(int i = 0; i < n; i++)
            xorr = (xorr ^ nums[i]);
        
        int pos = 0;
        for(int i = 0; i < 32; i++){
            if(((xorr >> i) & 1)){
                pos = i;
                break;
            }
        }
           
        int res1 = 0, res2 = 0;
        for(int i = 0; i < n; i++){
            if(((nums[i] >> pos) & 1))
                res1 = (res1 ^ nums[i]);
            else
                res2 = (res2 ^ nums[i]);
        }
        return {res1, res2};
    }
};