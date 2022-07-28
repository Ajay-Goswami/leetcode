class Solution {
public:
    int maxProduct(vector<string>& words) 
    {
        int n = words.size();
        int max_prod = 0;
        
        vector<set<char>>v;  
        for(int i=0; i<n; i++)
        {
            string x1 = words[i];
            set<char> s1;
            for(auto q: x1) {s1.insert(q);}
            v.push_back(s1);
        }
        
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int flag = true;      // check if any char in two set are same or not
                for(auto i : v[i])   
                {
                    if(v[j].find(i) != v[j].end())
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag == true)    // if they dont have any common char
                { 
                    int temp_prod = words[i].size()*words[j].size();
                    if(max_prod < temp_prod) {max_prod = temp_prod;}
                }
            }
        }
        return max_prod;        
    }
};