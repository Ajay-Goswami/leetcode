class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        for(int i=0; i<=*max_element(groupSizes.begin(), groupSizes.end()); i++){
            vector<int> sub;
            for(int j=0; j<groupSizes.size(); j++){
                if(groupSizes[j]==i){
                    if(sub.size()>=i){
                        ans.push_back(sub);
                        sub.clear();
                    }
                    sub.push_back(j);
                }
            }
            if(sub.size())
                ans.push_back(sub);
        }
        return ans;
    }
};