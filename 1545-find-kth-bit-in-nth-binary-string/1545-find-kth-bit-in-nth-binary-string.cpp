class Solution {
public:
    char findKthBit(int n, int k) {
        string first="0";
        string temp, s;
        while(n--){
            temp= first;
            reverse(temp.begin(), temp.end());
            for(char &c:temp){
                if(c=='0')
                    c='1';
                else
                    c='0';
            }
            first= first + "1" + temp;
        }
        return first[k-1];
    }
};