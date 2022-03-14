class Solution {
public:
    string simplifyPath(string path) {
        //we are start to move from last
        int index= path.size()-1;
        
        //ans used for store result and take it empty in first
        string ans="";
        
        //back is used for check how many times we have to go back
        int back=0;
        
        while(index>=0)
        {
            //temp is used for checking what is in between two slash "/"
            string temp="";
            while(index>=0 && path[index]!='/')
                  {
                      temp= path[index]+temp;
                      index--;
                  }
                  index--;
                  
                  if(temp=="" || temp==".")
                    continue;
                  if(temp=="..")
                    back++;
                  else if(back > 0)
                  {
                      back--;
                  }
                  else{
                      ans=temp+ans;
                      ans="/"+ans;
                  }
        }
                  if(ans=="")
                  return "/";
        return ans;
    }
};