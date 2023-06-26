//link: https://leetcode.com/problems/pascals-triangle/

CODE:

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>>dp(n);
        dp[0].push_back(1);
        if(n==1)
        return dp;
        dp[1].push_back(1);
        dp[1].push_back(1);
        if(n==2)
        return dp;
        for(int i=2;i<n;i++){
            dp[i].push_back(1);
            for(int j=1;j<i;j++){
                dp[i].push_back(dp[i-1][j-1]+dp[i-1][j]);
            }
            dp[i].push_back(1);
        }
        return dp;
    }
};
