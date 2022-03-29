class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector <pair<int,int>>s1;
    
        for(int i=0; i<nums.size(); i++)
        {
            s1.push_back(make_pair(nums[i],i));
        }
        sort(s1.begin(), s1.end());
        for(int i=0; i<s1.size()-1; i++)
        {
           if((s1[i].first == s1[i+1].first)&&(abs(s1[i].second-s1[i+1].second)<=k))
            return true;
        }
        return false;
    }
};