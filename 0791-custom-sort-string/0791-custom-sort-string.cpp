class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int> m;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;

        if(order==s)
            return order;

        string str;
        int k=0;
        
        for(int i=0;i<order.size();i++){
            k=m[order[i]];
            m[order[i]]=0;
            while(k){
                str+= order[i];
                k--;
            }
        }
        for(auto i=m.begin();i!=m.end();i++){
             k=i->second;
             while(k){
               str+= i->first;
               k--;
             }
        }
         return str;
    }
};