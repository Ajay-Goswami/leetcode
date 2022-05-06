class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        vector<pair<int,int>> vec;
        for(int i=0; i<s.length(); i++ )
        {
            if(vec.size()==0)
                vec.push_back({s[i],1});
            else if (vec.back().first!=s[i])
                vec.push_back({s[i],1});
            else{
                vec.back().second++;
                if(vec.back().second==k)
                    vec.pop_back();
            }
        }
        string result;
        for(int i=0; i<vec.size(); i++)
        {
            result.append(vec[i].second, vec[i].first);
        }
        return result ;
    }
};