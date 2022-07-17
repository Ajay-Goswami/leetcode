class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        stack<char> st;
        
        for(auto x:s){
            if(x=='('){
                if(st.size()>0){
                    result.push_back(x);
                }
                st.push(x);
            }
            else{
                st.pop();
                if(!st.empty()){
                    result.push_back(x);
                }
            }
        }
        return result;
    }
};