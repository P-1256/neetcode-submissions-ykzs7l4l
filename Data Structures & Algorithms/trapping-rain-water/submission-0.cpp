class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        int lMax = height[0], rMax = height[len-1];
        int l=0, r=len-1;

        int trap=0;
        while(l<r){

            if(lMax> height[l]) trap+=(lMax-height[l]);
            else lMax = height[l];
            if(rMax> height[r]) trap+=(rMax-height[r]);
            else rMax = height[r];

            if(height[l]<=height[r])l++;
            else r--;
        }

        return trap;
    }
};
