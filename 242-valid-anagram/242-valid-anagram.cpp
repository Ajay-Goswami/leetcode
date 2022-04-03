class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        
        int s_check[26]={0};
        int t_check[26]={0};
        
        for(int i=0; i<s.length(); i++){
            s_check[s[i]-'a']++;
            t_check[t[i]-'a']++;
        }
        
        for(int i=0; i< 26; i++){
            if(s_check[i] != t_check[i])
                return false;
        }
        return true;
    }
};