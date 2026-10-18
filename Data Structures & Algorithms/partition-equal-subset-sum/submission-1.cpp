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
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(sum+1, 0));

        for(int i=0; i<n; i++) dp[i][0] =1;
        if(nums[0]<=sum/2) dp[0][sum/2]=1;

        for(int i=1; i<n; i++){
            for(int s=0; s<=sum; s++){
                bool tk = 0;
                if(s>=nums[i]) tk = dp[i-1][s-nums[i]];
                bool ntk = dp[i-1][s];

                dp[i][s] = tk || ntk;
            }
        }
        
        return dp[n-1][sum];

    }
};
