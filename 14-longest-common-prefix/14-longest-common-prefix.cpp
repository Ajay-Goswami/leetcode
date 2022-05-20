class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s="";
        for(int i=0; i<strs[0].size(); i++){
            char c= strs[0][i];
            
            for( auto x: strs){
                if(c!=x[i])
                    return s;
            }
            s+=c;
        }
        return s;
    }
};
    
