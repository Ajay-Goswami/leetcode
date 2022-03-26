class Solution {
public:
    //this funtion is used for checking all elements are unique or not
    int check(int left, int right, string& s){
        //sets store only unique elements
        set<int> st;
        //this loop is used for insert unique elements in set
        for(int i=left; i<=right; i++){
            st.insert(s[i]);
        }
        //if all elements are unique then set store all 3 values and there size is 3.
        if(st.size()==3)
            return 1;
        //if all elements are not unique.
        else
            return 0;
    }
    
    int countGoodSubstrings(string s) {
        //right left is used for count window size
            int right=0,left=0;
        //ans is used for count unique elements window
            int ans=0;
        //for loop for iterate
         while(right<s.length()){
            //if window size is 3 then check for unique elements
            if(right-left==2){
                //check for unique elements
                ans+=check(left,right,s);
                //increase position of left
                left++;
            }
            //if window size is not 3
                //increse position of right 
                right++;
        }
        
        return ans;
    }
};

