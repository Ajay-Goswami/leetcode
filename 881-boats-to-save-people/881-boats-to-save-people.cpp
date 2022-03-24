class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count=0;
        int j= people.size() -1;
        
        //sort vector people accorfing to their weight
        sort(people.begin(), people.end());
        
        for(int i=0 ; i<=j ; --j){
            //check lighter weight + max weight
                if(people[i]+people[j] <= limit)
                {
                    ++i;
                }
                ++count;
        }
        return count;
    }
};


