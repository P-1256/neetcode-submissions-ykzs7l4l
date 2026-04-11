class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int l=0;
        int r= nums.size()-1;

        int  ans=0;

        while(l<=r){
            int m = l+(r-l)/2;

            if(nums[m]<target){
                ans =m+1;
                l=m+1;
            }
            else r=m-1;
        }

        return ans;

    }
};