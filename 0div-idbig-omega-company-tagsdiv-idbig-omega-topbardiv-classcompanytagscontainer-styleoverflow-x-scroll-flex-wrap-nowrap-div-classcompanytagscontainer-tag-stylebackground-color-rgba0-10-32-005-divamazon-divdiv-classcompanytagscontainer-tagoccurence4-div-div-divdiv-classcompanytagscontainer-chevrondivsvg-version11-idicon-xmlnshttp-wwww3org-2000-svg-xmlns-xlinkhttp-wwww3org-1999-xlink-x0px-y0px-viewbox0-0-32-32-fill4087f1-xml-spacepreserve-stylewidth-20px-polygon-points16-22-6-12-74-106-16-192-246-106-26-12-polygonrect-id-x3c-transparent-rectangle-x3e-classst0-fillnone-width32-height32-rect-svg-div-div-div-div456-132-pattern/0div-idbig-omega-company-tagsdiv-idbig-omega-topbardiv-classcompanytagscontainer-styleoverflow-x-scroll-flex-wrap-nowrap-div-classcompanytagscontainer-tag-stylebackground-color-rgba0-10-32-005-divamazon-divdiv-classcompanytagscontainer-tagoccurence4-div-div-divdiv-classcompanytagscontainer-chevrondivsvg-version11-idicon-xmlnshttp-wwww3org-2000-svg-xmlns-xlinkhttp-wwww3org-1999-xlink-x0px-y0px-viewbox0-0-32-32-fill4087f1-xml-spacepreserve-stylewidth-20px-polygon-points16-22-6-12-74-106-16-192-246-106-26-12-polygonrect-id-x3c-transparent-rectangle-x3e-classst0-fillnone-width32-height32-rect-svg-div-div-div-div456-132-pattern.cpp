class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n= nums.size();
        int min[n];
        min[0] = nums[0];
        for(int i=1; i<n; i++){
            min[i]= std::min(min[i-1],nums[i]);
        }
        
        stack<int> st;
        for(int j=n-1; j>=0; j--){
            if(nums[j] >min[j]){
                while(!st.empty() && st.top() <= min[j])
                    st.pop();
                if(!st.empty() && st.top()<nums[j])
                    return true;
                st.push(nums[j]);
            }
        }
        return false;
    }
};