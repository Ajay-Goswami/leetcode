class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int i= 0, j= nums1.size(); 
        int k= 0, l= nums2.size(); 
        while(i<nums1.size() && k<nums2.size()){ 
           if(nums1[i]<=nums2[k]){ 
               res.push_back(nums1[i++]);
           } 
           else{ 
               res.push_back(nums2[k++]);
           } 
       } 
       for(; i<nums1.size(); ){ 
           res.push_back(nums1[i++]);
       } 
       for(; k<nums2.size();){ 
           res.push_back(nums2[k++]);
       } 

        int mid = res.size()/2;
        if(res.size() % 2 == 0)
        {
            double x = (double)(res[mid] + res[mid-1])/2.0;
            return x;
        }
        return res[mid];
    }
};


// vector<int> nums;
//         for(int i=0; i<nums1.size(); i++)
//         {
//             nums.push_back(nums1[i]);
//         }
//         for(int i=0; i<nums2.size(); i++)
//         {
//             nums.push_back(nums2[i]);
//         }
//         sort(nums.begin(), nums.end());
//         int mid = nums.size()/2;
//         if(nums.size() % 2 == 0)
//         {
//             double x = (double)(nums[mid] + nums[mid-1])/2;
//             return x;
//         }
//         return nums[mid];