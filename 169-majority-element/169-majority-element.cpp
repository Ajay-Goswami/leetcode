class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //MAP IS USED FOR STORE VALUE AND ITS OCCURANCE
        map<int, int> m;
        //L IS USED FOR CHECKING MAJORITY ELEMENT OCCURANCE
        int L = nums.size()/2;
        
        for(int i=0; i<nums.size(); i++){
             m[nums[i]]++;
            //IF ANY ELEMENT OCCURANCE IS GREATER THAN L THAN RETURN IT
             if(m[nums[i]] > L)
                return nums[i];
        }
        //IF NO ELEMENT OCCURNACE IS GREATER THAN L RETURN EMPTY 
        return {};
    }
};