class Solution {
public:
    string truncateSentence(string s, int k) {
        int i=0;
          while(k!=0 && i<=s.size())    
           (s[i]==' ') ? k--,i++ : i++;
              return s.substr(0,i-1);
    }
};

