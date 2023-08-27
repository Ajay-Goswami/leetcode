class Solution {
public:
    bool canCross(vector<int>& stones) {
        unordered_map<int,unordered_set<int>>mp;
        for(auto x:stones)
            mp[x];
        
        mp[stones[0]].insert(1);
        
        for(int i=0;i<stones.size();i++){
            unordered_set<int>temp=mp[stones[i]];
            for(auto steps:temp){
                if(mp.find(steps+stones[i])!= mp.end()){
                    mp[stones[i]+steps].insert(steps);
                    mp[stones[i]+steps].insert(steps+1);
                    if(steps-1 !=0)
                        mp[stones[i]+steps].insert(steps-1);
                }
            }
        }
        return mp[stones[stones.size()-1]].size()!=0;
    }
};