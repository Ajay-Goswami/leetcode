class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k > s.size()) return false;
        
        set<string> seen;
        string cur = "";
        
        for(int i=0; i<=s.size()-k;i++){
            int j = i;
            cur="";
            while(j < i+k ){
                cur+=s[j++];
            }
            seen.insert(cur);
        }
        return seen.size()==pow(2,k);
    }
};