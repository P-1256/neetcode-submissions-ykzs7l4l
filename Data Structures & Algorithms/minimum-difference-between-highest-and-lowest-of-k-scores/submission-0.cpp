class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l=0;
        int r=k-1;
        int minDiff=INT_MAX;
        while(r<nums.size()){
            int diff=nums[r]-nums[l];
            minDiff=min(minDiff, diff);
            l++;
            r++;
        }

        return minDiff;
    }
};