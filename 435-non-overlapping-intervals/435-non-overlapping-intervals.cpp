class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int count = 0;
        int i = n - 1;
        while(i > 0)
        {
            int j = i - 1;   
            while(j >= 0 && intervals[j][1] > intervals[i][0])
            {
                count++;
                j--;
            }
            i = j;
        }
        return count;
    }
};


