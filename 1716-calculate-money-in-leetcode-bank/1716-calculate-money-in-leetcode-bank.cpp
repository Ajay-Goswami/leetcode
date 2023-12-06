class Solution {
public:
    int totalMoney(int n) {
         int w = n / 7; 
        int r = n % 7;
        
        int total = 0;
        
        for (int i = 1; i <= w; i++)
            total += 28 + 7 * (i - 1); 
        
        for (int i = 1; i <= r; i++)
            total += i + w; 
        
        return total;
    }
};