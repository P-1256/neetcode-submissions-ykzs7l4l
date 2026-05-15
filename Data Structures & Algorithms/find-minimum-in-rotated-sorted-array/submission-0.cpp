class Solution {
public:
    int findMin(vector<int> &nums) {

        int n = nums.size();
        if(nums[0]<=nums[n-1]) return nums[0];
        if(nums[n-1]<nums[n-2]) return nums[n-1];
        int l=1, r=n-2;

        while(l<r){

            int m = (r+l)/2;
            
            if(nums[m]<nums[m-1] && nums[m]<nums[m+1]) return nums[m];
            
            if(nums[r]>nums[m]) r=m-1;
            else l=m+1;
        }
        return nums[l];
    }
};
