class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int coins = 0;
            int i = piles.size()- 2;
            int j = 0;
            while (j++ < piles.size()/ 3) {
                coins += piles[i];
                i -= 2;
            }
            return coins;
    }
};            