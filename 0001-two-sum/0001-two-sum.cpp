class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
      
        for(int i=0; i<nums.size(); i++){
            int compliment = target - nums[i];
            if(m.find(compliment) != m.end()){
                return {m[compliment],i};
            }
            else
                m.insert({nums[i],i});
        }
        return {-1,-1};
    }
};