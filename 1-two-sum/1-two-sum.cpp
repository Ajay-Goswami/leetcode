class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>vp;
        int n= nums.size();
        for(int i=0; i<n; i++){
            vp.push_back({nums[i],i});
        }
        sort(vp.begin(), vp.end());
        int x, y;
        int j=0;
        int k=n-1;
        while(j<k){
            if(vp[j].first+vp[k].first== target)
            {
                x=vp[j].second;
                y=vp[k].second;
                break;
            }
            if(vp[j].first+vp[k].first > target)
                k--;
            if(vp[j].first+vp[k].first < target)
                j++;
        }
        return {x,y};
    }
};

	
