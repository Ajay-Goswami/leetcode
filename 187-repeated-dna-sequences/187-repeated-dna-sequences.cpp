class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>v;
        if(s.length()<=10)
            return v;
        unordered_map<string , int> m;
        
        for(int i=0; i<=s.length()-10; i++){
            string str= s.substr(i,10);
            m[str]++;
        }
        
        for(auto x:m){
            if(x.second>1)
                v.push_back(x.first);
        }
        
        return v;
    }
};