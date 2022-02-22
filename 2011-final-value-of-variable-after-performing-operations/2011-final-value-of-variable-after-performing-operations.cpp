class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int operation=0;
        for(int i=0; i<operations.size(); i++)
        {
          if(operations[i][0]=='+' || operations[i][1]=='+'){operation++;}
        else{operation--;}
            
        }
        return operation;
    }
};