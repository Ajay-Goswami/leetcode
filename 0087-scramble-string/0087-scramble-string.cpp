class Solution {
public:
    unordered_map<string,bool> mm;
    bool isScramble(string s1, string s2) {
        if(s1==s2)return true;
        if(mm.find(s1+s2)!=mm.end())
            return mm[s1+s2];
        int n = s1.length();
        string temp ="";
        for(int i=0;i<n-1;i++){
            temp+=s1[i];
            if(isScramble(temp,s2.substr(0,i+1)) && isScramble(s1.substr(i+1,n-i-1),s2.substr(i+1,n-i-1)))
                return true;
            else if(isScramble(temp,s2.substr(n-i-1,i+1)) && isScramble(s1.substr(i+1,n-i-1),s2.substr(0,n-i-1)))
                return true;
        }
        return mm[s1+s2]=false;
    }
};
