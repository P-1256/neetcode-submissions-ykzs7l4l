class Solution {
public:
    int ts;
    bool part(int i, int s, vector<int>& a, vector<vector<int>>& dp){

        if(i<0){
            return (2*s == ts);
        }

        if(dp[i][s] != -1) return dp[i][s];

        bool tk = 0;
        if(s>=a[i]) tk = part(i-1, s-a[i], a, dp);
        bool ntk = part(i-1, s, a, dp);

        return dp[i][s] = tk || ntk;
    }

    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum%2) return false;
        
        this->ts = sum;
        vector<vector<int>> dp(nums.size(), vector<int>(sum+1, -1));
        
        return part(nums.size()-1, sum, nums, dp);

    }
};
