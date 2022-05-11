class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0, j=nums1.size();
        int m=0, n=nums2.size();
        
        vector<int> v;
        while(i<nums1.size() && m<nums2.size()){
            if(nums1[i]==nums2[m]){
                v.push_back(nums1[i]);
                i++,m++;
            }
            else if(nums1[i]<nums2[m]){
                i++;
            }
            else{
                m++;
            }
        }
        v.erase(unique(v.begin(), v.end()), v.end());
        return v;
    }
};