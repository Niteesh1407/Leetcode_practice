//link: https://leetcode.com/problems/restore-the-array/

CODE:

class Solution {
public:
    int MOD=1e9+7;
    int solve(string &s,int k,int in,vector<int>&dp){

        if(in>=s.size())
        return 1;

        if(s[in]=='0')
        return 0;

        if(dp[in]!=-1)
        return dp[in];

        int ways=0;
        long num=0;
        for(int i=in;i<s.size();i++){
            num=num*10+s[i]-'0';
            if(num>k)break;
            ways= (ways+solve(s,k,i+1,dp))%MOD;
        }
        return dp[in]=ways;
    }
    int numberOfArrays(string s, int k) {
        vector<int>dp(s.size(),-1);
        return solve(s,k,0,dp);
    }
};
