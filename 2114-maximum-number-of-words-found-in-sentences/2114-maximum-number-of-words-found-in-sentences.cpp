class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max =0;
        for (auto x:sentences)
        {
            int count =0;
            for(auto i:x)       
              {
                  if(i==' ')
                      count++;
              }
            if(max<count)
                max= count;
        }     
        return max+1;
       
    }
};