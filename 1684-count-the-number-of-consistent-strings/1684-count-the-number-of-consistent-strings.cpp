class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int c=0;
        for(auto x:words)
        {
            int flag=0;
            for(auto j:x)
              if(allowed.find(j)==string::npos)
              {
                flag=1;   
              }
        if(flag!=1)
            c++;
        }
        return c;
    }
};