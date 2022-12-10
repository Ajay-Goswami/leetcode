class Solution {
public:
    bool isAnswer(vector<int>&A , int mid ,int m ){
        int initial= 1;  
        int prev = A[0];  
        for(int i = 1 ; i < A.size() ; i++){
            if(A[i]-prev >= mid){  
                prev = A[i];
                initial+=1;  
                if(initial == m ) 
                    return true;  
            }
        }
        if(initial < m) 
            return false; 
        return true;
    }
    int maxDistance(vector<int>& A, int m) {
        sort(A.begin() , A.end());
        int s = 0 ,n = A.size(),  e = A[n-1];
        int ans ;
        while(s <= e){
            int mid = s + (e-s)/2;
            
            if(isAnswer(A, mid ,m))
                ans = mid , s = mid+1;    
            else
                e = mid-1; 
        }
        return ans;
    }
};