class Solution {
public:
    vector<string> ans;
    
    void helper(string &s, int index){
        if (index == s.length()){
            ans.push_back(s);
            return;
        }

        if(s[index] >= 65 && s[index] <=90){
            s[index] =tolower(s[index]);
            helper(s, index+1);
            s[index] =toupper(s[index]);
        }

        else if(s[index] >= 97 && s[index] <= 122){
            s[index] =toupper(s[index]);
            helper(s, index+1);
            s[index] =tolower(s[index]);
        }
        helper(s, index+1);
    }
    
    vector<string> letterCasePermutation(string s) {
        
        helper(s, 0);
        return ans;
    }
};