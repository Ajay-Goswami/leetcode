class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        //minimum_cost used for counting minimum cost in fly every person
        int minimum_cost=0;
        
        //take a vector differece for storing the difference of city A and B costs
        vector<int> difference;
        
        for(int i=0; i<costs.size(); i++){
            //if every person of city A fly then cost is
            minimum_cost += costs[i][0];
            
            //difference between B-A
            difference.push_back(costs[i][1]- costs[i][0]);
        }
        
        //now sort the vector difference
        sort(difference.begin(), difference.end());
        
        //now take difference between minimum cost for city A and half least differnce of difference vector 
        for(int i=0; i<costs.size()/2; i++){
            minimum_cost +=difference[i];
        }
        
        return minimum_cost;
    }
};