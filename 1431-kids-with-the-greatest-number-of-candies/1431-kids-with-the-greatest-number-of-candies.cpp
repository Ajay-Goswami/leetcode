class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=0;
        for(int i=0; i<candies.size(); i++)
        {
            if(max<candies[i])
                max=candies[i];
        }
        vector<bool> checker;
        for(int i=0; i<candies.size(); i++)
        {
            if((candies[i]+extraCandies) >= max)
            {
                checker.push_back(true);
            }
            else{
                checker.push_back(false);
            }
        }
        return checker;
    }
};