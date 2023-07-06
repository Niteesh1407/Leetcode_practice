//link: https://leetcode.com/problems/minimum-size-subarray-sum/

CODE:

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,s=0;
        int res=INT_MAX;
        while(j<nums.size()){
            s=s+nums[j];
            while(s>=target){
                s=s-nums[i];
                res=min(res,j-i+1);
                i++;
            }
            j++;
        }
        if(res==INT_MAX)
        return 0;
        return res;
    }
};
