class Solution {
public:
    bool solve(int n, vector<int>& dp) {
        if (n == 0)
            return false;

        if (dp[n] != -1)
            return dp[n];

        for (int x = 1; x * x <= n; x++) {
            if (!solve(n - x * x, dp)) {
                return dp[n] = true;
            }
        }

        return dp[n] = false;
    }
    bool winnerSquareGame(int n) {
        vector<int> dp(n+1,-1);

        return solve(n,dp);
    }
};