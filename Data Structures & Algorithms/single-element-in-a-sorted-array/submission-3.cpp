class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int len = nums.size();

        if(len==1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[len-1] != nums[len-2]) return nums[len-1];

        int l=1, r=len-2;
        while(l<=r){
            int m=l+(r-l)/2;

            if(nums[m-1] != nums[m] && nums[m] != nums[m+1]) return nums[m];

            if(m%2 && nums[m] == nums[m-1] || 
            m%2==0 && nums[m] == nums[m+1]) l=m+1;
            else r=m-1;
        }
        return 0;
    }
};