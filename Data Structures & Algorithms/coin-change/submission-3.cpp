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

        vector<vector<int>> dp(n, vector<int>(amount+1, 0));

        for(int amt=0; amt<=amount; amt++){
            if(amt%coins[0]==0) dp[0][amt] = amt/coins[0];
            else dp[0][amt] = 1e9;
        }

        for(int i=1; i<n; i++){
            for(int amt =0; amt<=amount; amt++){
                int tk = 1e9;
                if(amt>=coins[i]) tk =1+dp[i][amt-coins[i]];
                int ntk = dp[i-1][amt];

                dp[i][amt] = min(tk, ntk);
            }
        }

        return (dp[n-1][amount] == 1e9)? -1: dp[n-1][amount];

        int ans = cnch(coins, amount, n-1, dp);

        if(ans==1e9) return -1;
        return ans;
    }
};
