class Solution {
public:
        vector<string> ans;
        void generate(int l,int r,string s)
        {
            if(r==0)
            {
                ans.push_back(s);
                return;
            }
            if(l==r)
            {
                generate(l-1,r,s+"(");
            }
            else
            { 
                if(l!=0)
                generate(l-1,r,s+"(");
                generate(l,r-1,s+")");
                
            }
                
        }
        vector<string> generateParenthesis(int n) {
            generate(n,n,"");
            return ans;
        }
};