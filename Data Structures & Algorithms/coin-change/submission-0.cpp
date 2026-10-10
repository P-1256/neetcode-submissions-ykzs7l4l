class Solution {
public:

    int cnch(vector<int>&c, int amt, int i,  vector<vector<int>>& dp){
        if(i==0){
            if(amt%c[i]==0) return amt/c[i];
            return 1e9;
        }

        if(dp[i][amt] != -1) return dp[i][amt];

        int tk = 1e9;
        if(amt>=c[i]) tk = 1+cnch(c, amt-c[i], i, dp);
        int ntk = cnch(c, amt, i-1, dp);

        return dp[i][amt] = min(tk, ntk);
    }
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();

        vector<vector<int>> dp(n, vector<int>(amount+1, -1));

        int ans = cnch(coins, amount, n-1, dp);

        if(ans==1e9) return -1;
        return ans;
    }
};
