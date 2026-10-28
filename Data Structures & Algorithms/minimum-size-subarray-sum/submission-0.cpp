class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        int l=0, r=0, minLen=n+1;
        int sum=0;

        while(r<n){
            sum+=nums[r];
            while(l<n && sum>=target){
                minLen = min(minLen, r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        if(minLen==n+1) return 0;
        return minLen;
    }
};