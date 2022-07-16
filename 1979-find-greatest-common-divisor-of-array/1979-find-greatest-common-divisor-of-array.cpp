class Solution {
public:
    int gcd(int n1, int n2) {
         if (n2 != 0)
            return gcd(n2, n1 % n2);
         else
            return n1;
    }
    int findGCD(vector<int>& nums) {
        int x= *min_element(nums.begin(), nums.end());
        int y= *max_element(nums.begin(), nums.end());
        return gcd(x,y);
    }
};