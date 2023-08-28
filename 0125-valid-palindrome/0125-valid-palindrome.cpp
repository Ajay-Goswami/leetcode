class Solution {

public:
    bool check(string& str, int i, int &n){        
        if(i>=n/2) 
            return true;
        else if (str[i]!=str[n-i-1]) 
            return false;
        return check(str, i+1, n);
    }

    bool isPalindrome(string s) {
        string str;

        for(int i=0;i<s.length();i++){
            if(s[i]>='A'&&s[i]<='Z' || s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9') 
                str.push_back(tolower(s[i]));
        }
        int len=str.length();
        return check(str, 0,len);
    }
};
