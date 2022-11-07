class Solution {
    int toMinute(string &s) {
        return stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3));
    }
public:
    int convertTime(string current, string correct) {
        int a=toMinute(current);
        int b=toMinute(correct);
        int count=0;
        while(a<b){
            if(b-a>=60)
                a+=60;
            else  if(b-a>=15)
                a+=15;
            else  if(b-a>=5)
                a+=5;
            else 
                a+=1;
            count++; 
        }
        return count;
    }
};