class Solution {
public:
    void merge(vector<int>& nums,int s,int e){
        vector<int> t;
        int m = (s+e)/2;
        int i=s, j=m+1;
        
        while(i<=m and j<=e){
            if(nums[i] < nums[j])
                t.push_back(nums[i++]);
            else
                 t.push_back(nums[j++]);
        }
        while(i<=m)
             t.push_back(nums[i++]);
        
        while(j<=e)
             t.push_back(nums[j++]);
        
        int k=0;
        for(int p=s ; p<=e ; p++){
            nums[p] = t[k++];
        }
        return;
    }
    void mergeSort(vector<int>& nums , int s,int e){
        if(s>=e)  return;
        int mid = (s+e)/2;
        mergeSort(nums,s,mid);
        mergeSort(nums,mid+1, e);
        return merge(nums,s,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        int s = 0, e = nums.size()-1;
        mergeSort(nums,s, e);
        return nums;
    }
};