//link: https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/

CODE:

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0,l=0,r=0,len=0;
        if(count(nums.begin(),nums.end(),0)==0)
        return n-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                l=i-1;
                r=i+1;
                while(l>=0 && nums[l]!=0)
                l--;
                while(r<n && nums[r]!=0)
                r++;
                len=max(len,r-l-2);
            }
        }
        return len;
    }
};
