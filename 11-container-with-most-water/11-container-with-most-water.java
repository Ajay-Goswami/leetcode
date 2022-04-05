class Solution {
    public int maxArea(int[] height) {
        int left=0;
        int right=height.length-1;
        int maxArea=0;
        int lh, rh;
        while(left<right)
        {
            lh=height[left];
            rh=height[right];
            int minimum= Math.min(lh,rh);
            maxArea= Math.max(maxArea, minimum*(right-left));
            if(lh<rh)
                left++;
            else
                right--;
        }
        return maxArea;
    }
}