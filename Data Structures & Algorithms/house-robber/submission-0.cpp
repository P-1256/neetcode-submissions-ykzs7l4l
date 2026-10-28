class Solution {
public:

    int n;

    int maxRob(int i, vector<int>& a, int pv, vector<vector<int>>& dp){
        if(i>=n) return 0;

        if(dp[i][pv] != -1) return dp[i][pv];

        int tk = 0;
        if(!pv) tk = a[i]+maxRob(i+1, a, 1, dp);
        int skp = maxRob(i+1, a, 0, dp);

        return dp[i][pv]=max(tk, skp);
    }

    int rob(vector<int>& nums) {
        
        this->n = nums.size();

        vector<vector<int>> dp(n, vector<int>(2, -1));
        return maxRob(0, nums, 0, dp);
    }
};
