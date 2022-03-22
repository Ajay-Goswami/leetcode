class Solution {
public:
    string getSmallestString(int n, int k) {
        //store the ascii value of a in all positon
        string str(n,'a');
        k -= n;
        
        while( k > 0)
        {
            str[--n] += min(25,k);
            k -= min(25,k);
        }
        
        return str;
    }
};