//link: https://leetcode.com/problems/uncrossed-lines/

CODE:

class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        if (m<n){
            swap(nums1, nums2);
            swap(m, n);
        }
        vector<int> dp(n + 1);
        for(int i=1;i<=m;i++){
            int li=0;
            for(int j=1;j<=n;j++) {
                int pi=dp[j];
                if(nums1[i-1]==nums2[j-1]){
                    dp[j]=li+1;
                }else{
                    dp[j]=max(dp[j-1],pi);
                }
                li=pi;
            }
        }
        return dp[n];
    }
};
    
