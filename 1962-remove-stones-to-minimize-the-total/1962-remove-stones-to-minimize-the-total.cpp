class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int res = accumulate(begin(piles), end(piles), 0), curr, diff;
        priority_queue<int> pq(begin(piles), end(piles));
        while (k--) {
            curr = pq.top(), pq.pop();
            diff = curr >> 1;
            res -= diff;
            curr -= diff;
            pq.push(curr);
        }
        return res;
    }
};