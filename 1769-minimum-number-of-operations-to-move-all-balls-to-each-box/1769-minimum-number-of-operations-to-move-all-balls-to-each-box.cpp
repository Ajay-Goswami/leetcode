class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> result;
        
        int n = boxes.size(); 
        
        for (int i=0; i<n; i++){
            int f =0; 
			int l =n;            
            int sum =0;  
			
            while (f<l){
                if (boxes[f]=='1'){
                    sum = sum + abs(f-i);
                }
                f++;
            }
            
			result.push_back(sum);
        }
        
        return result;
    }
};