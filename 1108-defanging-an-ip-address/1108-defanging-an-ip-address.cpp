class Solution {
public:
    string defangIPaddr(string address) {
        string result="";
        for(auto str: address) {
            if(str == '.') {
                result+="[.]";
            } else {
                result+=str;
            }
        }
        return result;
    }
};