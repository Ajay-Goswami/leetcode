class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<int> st;//int because we will store the index in stack
        
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='(')
                st.push(i);//pushing the index into the stack
            else if(s[i]==')'){
                if(!st.empty() && s[st.top()]=='('){
                    st.pop();
                }
                else
                    st.push(i);
            }
        }
        
        while(!st.empty()){
            s.erase(st.top(),1);//erasing the unvalid parentheses from the string
            st.pop();
        }
        
        return s;
        
    }
};