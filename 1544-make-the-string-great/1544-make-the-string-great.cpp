class Solution {
public:
    string makeGood(string s) {
        string result;
        for(int i = 0 ; i < s.size() ; i++){
            result.push_back(s[i]);
            while(result.size() && abs(result.back()-s[i+1])==32){
                result.pop_back();
                i++;
            }
        }
        return result;
    }
};

