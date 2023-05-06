//link: https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/

CODE:

class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i=0,c=0,n=nums.size();
        int k=1e9+7;
        int l=0,r=n-1;
        vector<int>v(n,1);

        for(i=1;i<n;i++)
            v[i]=(v[i-1]*2)%k;

        while(l<=r){
            if(nums[l]+nums[r] <= target){
                c+=v[r-l];
                c=c%k;
                l++;
            }
            else
                r--;
        }
        return c;
    }
};
