class Solution {
public:
    int countVowelStrings(int n) {
        int m = n+1;
        return m * (m+1) * (m+2) * (m+3)/24;
    }
};