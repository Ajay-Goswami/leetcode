class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n= nums.size();
        vector<int> v(n);
        stack<int> s;
        for(int i=0; i<2*n; i++){
            while(!s.empty() && nums[i%n]>nums[s.top()]){
                v[s.top()] = nums[i%n];
                s.pop();
            }
            if(i<n){
                s.push(i%n);
            }
        }
        while(!s.empty()){
            v[s.top()]=-1;
            s.pop();
        }
        return v;
    }
};