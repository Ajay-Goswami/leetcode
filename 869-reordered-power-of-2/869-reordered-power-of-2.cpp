class Solution {
public:
    bool reorderedPowerOf2(int N) { 
        vector<int>v;
        int i=1;
        while(i  <= 1e9 ){
            v.push_back(i);
            i=i*2;
        }
        unordered_map<int,int>mp,m;
        while(N>0){
            int d=N%10;
            mp[d]++;
            N/=10;
        }
        
        for(int j=0;j<v.size();j++){
            while(v[j]>0){
                int d=v[j]%10;
                m[d]++;
                v[j]/=10;
            }
            if(mp.size()==m.size()){
                int c=0;
                for(auto it=mp.begin();it!=mp.end();it++){
                    if(it->second==m[it->first])
                        c++;
                }
                if(c==m.size())
                    return true;
            }
             m.clear();
        }
        return false;
    }
};