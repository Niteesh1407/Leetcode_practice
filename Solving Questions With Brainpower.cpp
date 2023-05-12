//link: https://leetcode.com/problems/solving-questions-with-brainpower/

CODE:

class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        vector<long long>dp(n+1,0);
        for(int i=n-1;i>=0;i--){
            int k=questions[i][0];
            int s=questions[i][1];
            int nx=min(n,i+s+1);
            dp[i]=max(dp[i+1],k+dp[nx]);
            cout<<dp[i];
        }
        return dp[0];
    }
};
