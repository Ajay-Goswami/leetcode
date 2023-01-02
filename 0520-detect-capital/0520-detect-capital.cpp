class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()==1) 
            return true;
        int capital=0;
        capital=isupper(word[0])?1:0;
        if(!capital && isupper(word[1])) 
            return false;
        capital=isupper(word[1])?1:0;
        for(int x=2; x<word.size(); x++)
            if((capital && !isupper(word[x])) || (!capital && isupper(word[x]))) 
                return false;
        return true;
    }
};