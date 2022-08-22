class Solution {
private :
bool isPalindromeHelper(int l , int r , string &s)
{
    if(l >= r)
     return true ;

    if(s[l] != s[r])
     return false ;

    return isPalindromeHelper(l + 1 , r - 1 , s) ;
}

public:
    bool isPalindrome(string s) {
        string str = "" ;
    
        for(char ch : s)
        {
            if(isalnum(ch) == false)
             continue ;
            if(ch == ' ')
             continue ;
    
            if(isupper(ch) )
             ch = ch + 32 ; //for converting in lowercase.
    
            str.push_back(ch) ;
        }
    
        if(str.size() == 0)
         return true ;
    
        bool ans = isPalindromeHelper(0 , str.size() - 1 , str) ;
    
        return ans ;

    }
};
