class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0, b=0, x=0;
        int n= colors.size(), i=0;
        while(i<n){
            while(colors[i]=='A'){
                x++;
                if(x>=3)
                    a++;
                i++;
            }
            x=0;
            while(colors[i]=='B'){
                x++;
                if(x>=3)
                    b++;
                i++;
            }
            x=0;
        }
        return a>b ? true: false;
    }
};