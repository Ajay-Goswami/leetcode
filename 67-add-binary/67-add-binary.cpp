class Solution {
public:
    string addBinary(string a, string b) {
        string result="";
        int carry=0, i=0;
        int a_len= a.length();
        int b_len= b.length();
        
        while(i<a_len || i<b_len ||carry!=0){
            int x=0,y=0;
            if(i<a_len && a[a_len-1-i]=='1')
                x=1;
            if(i<b_len && b[b_len-1-i]=='1')
                y=1;
            
            result= to_string((x+y+carry)%2)+result;
            carry=(x+y+carry)/2;
            i++;
        }
        return result;
    }
};