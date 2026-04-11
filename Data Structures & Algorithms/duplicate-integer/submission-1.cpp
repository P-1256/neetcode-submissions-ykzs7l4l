class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int j=0;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[j]==nums[i]){
                return true;
            }
            j++;
        }
            return false;

    }
};