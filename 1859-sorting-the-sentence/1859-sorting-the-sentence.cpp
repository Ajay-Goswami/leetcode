class Solution {
public:
    string sortSentence(string s) {
        vector<string> v(9);
        string str;
        int pos;
        
        for ( auto u : s ) {
            if ( isspace(u) ) {
                v[pos-1] = str;
                str.clear();
            }
            else if ( isdigit(u) ) {
                pos = u-'0';
            }
            else str += u;
        }
        
        if ( !str.empty() ) v[pos-1] = str;
        
        string ans;
        for ( auto u : v ) {
            ans += u;
            if ( !u.empty() ) ans += ' ';
        }
        
        ans.pop_back();
        
        return ans;
    }
};