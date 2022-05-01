class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string result="", result2="";
        int i=0;
        while(s[i]!='\0'){
            if(s[i]>='a' && s[i]<='z')
                result+=s[i];
            else if(!result.empty())
                result.pop_back();
            ++i;
        }
        
        i=0;
        while(t[i]!='\0'){
            if(t[i]>='a' && t[i]<='z')
                result2+=t[i];
            else if(!result2.empty())
                result2.pop_back();
            ++i;
        }
        
        if(result.compare(result2)==0)
            return true;
        return false;
    }
};