class Solution {
public:
    bool check(vector<int>& nums) {
        
        int len = nums.size();
        
        vector<int>ans;
        int i=len-1;
        for(; i>0; i--){
            ans.push_back(nums[i]);
            if(nums[i]<nums[i-1]) break;
        }
        if(i==0) return true;

        reverse(ans.begin(), ans.end());

        for(int j=0; j<=i; j++){
            ans.push_back(nums[j]);
        }

        sort(nums.begin(), nums.end());

        for(int i=0; i<len; i++) if(nums[i] != ans[i]) return false;

        return true;
    }
};