class Solution {
public:
    int maxVowels(string s, int k) {
        int m=INT_MIN, c=0, x=0, y=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
                c++;
            x++;
            if(x==k){
                if(m<c)
                    m=c;
                if(s[y] == 'a' || s[y] == 'e' || s[y] == 'i' || s[y] == 'o' || s[y] == 'u')
                    c=c-1;
                y++;
                x--;
            }
        }
        return m;
    }
};