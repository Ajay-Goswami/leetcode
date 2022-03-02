class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        
        int max_area=INT_MIN,i=0,j=n-1;
        
        while(i<j) 
        {
            int h=min(height[i],height[j]);
            
            max_area=max(max_area,h*(j-i));
            
            if(height[i]<=h)
                i++;
            if(height[j]<=h)
                j--;
        }
        return max_area;
        
    }
};

