class Solution {
public:
    int scoreOfParentheses(string s) {
        int count=0;
        stack<int> st;
        for(int i=0 ; i<s.length(); i++) {
            if(s[i]=='(') {
                st.push(count);
                count=0;
            }
            else { 
                count+=st.top()+max(count, 1);
                st.pop();
            }
        }
     return count;
    }
};