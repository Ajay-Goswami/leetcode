class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> end_index(26, 0);       //used for tracking last occurence from a to z
        for(int i=0; i< s.length(); i++){
            end_index[s[i]-'a'] =i;
        }
        vector<int> result;     //used for storing partition result(number)
        int start =0, end=0;
        for(int i=0; i<s.length(); i++){    //used for scan char by char
            end= max(end, end_index[s[i]-'a']); //used for checking last index of char
            if(i== end){        //this happens when all the characters of current partition included
                result.push_back(i - start + 1);
                start = i+1;
            }
        }
        return result;
    }
};