class Solution {
public:
    string freqAlphabets(string s) {
        string str = "";
        for(int i = s.size()-1; i >= 0; --i){
            if(s[i] == '#'){
                int temp = 0;
                temp += (s[i-2] - '0')*10;
                temp += (s[i-1] - '0');
                int k = (temp);
                str += char(k - 1 + 'a');
                i=i-2;
            }else{
                str += char('a' + (s[i] - 1 - '0'));
            }
        }
        for(int i = 0; i<str.size()/2;++i){
            swap(str[i], str[str.size()-1-i]);
        }
        return str; 
    }
};