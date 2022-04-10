class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> res;
        for(string c: ops){
            if(c == "C")
                res.pop_back();
            else if(c == "D")
                res.push_back(2 * res.back());
            else if(c == "+")
                res.push_back(res.back() + res[res.size()-2]);
            else {
                int temp;
				stringstream(c) >> temp;
                res.push_back(temp);
            }
        }
        int sum=0;
        for(int i:res)
            sum+=i;
        return sum;
    }
};
