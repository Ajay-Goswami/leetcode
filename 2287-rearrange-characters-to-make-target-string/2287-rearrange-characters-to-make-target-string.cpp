class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        map <char , int> mp;
        int minimum=INT_MAX;
        
        for(int i=0 ; i<target.size() ; i++)
        {
           mp[target[i]]++;
        }
        
        vector<int> v(26 , 0);
         for(int i=0 ; i<s.size() ; i++)
        {
            v[s[i] - 'a']++;
        }
        
        for(int i=0 ; i<target.size() ; i++)
        {
            if(mp[target[i] ] > 0)
            minimum= min(minimum, v[target[i] - 'a'] / mp[target[i]]);
        }
        return minimum;
    }
};