class Solution {
public:
    void help(char c, int i, int n, string &temp, vector<string> &ans){
        if(i==n){
            ans.push_back(temp);
            return ;
        }
        if(c!='a'){
            temp+='a';
            help('a',i+1,n,temp, ans);
            temp.pop_back();
        }
        if(c!='b'){
            temp+='b';
            help('b',i+1,n,temp, ans);
            temp.pop_back();
        }
        if(c!='c'){
            temp+='c';
            help('c',i+1,n,temp, ans);
            temp.pop_back();
        }
    }
    string getHappyString(int n, int k) {
        vector<string> ans;
        string temp;
        help('v',0,n,temp,ans);
        if(ans.size()>=k)
            return ans[k-1];
        return "";
    }
};