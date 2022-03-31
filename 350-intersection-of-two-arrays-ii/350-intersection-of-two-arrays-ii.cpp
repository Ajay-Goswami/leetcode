class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int,int> store;
        for(int i=0; i<nums1.size(); i++){
            store[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++){
            if(store[nums2[i]]){
                result.push_back(nums2[i]);
                store[nums2[i]]--;
            }
        }
        return result;
    }
};