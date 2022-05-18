class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        //XOR OF SAME NUMBERS IS ZERO 
        //WE DO XOR OF ALL NUMBER AND SAME NUMBERS BECAME ZERO AND ONLY SINGLE ONE IS LEFT.
	    for(auto x:nums)
	        ans^=x;
	    return ans;
    }
};