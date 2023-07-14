//link: https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/

CODE:

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int>m;
        int res=1;
        for(int a:arr){
            int f=m.count(a-difference)?m[a-difference]:0;
            m[a]=f+1;
            res=max(res,m[a]);
        }
        return res;
    }
};
