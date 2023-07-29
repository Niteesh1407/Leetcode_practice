//link: https://leetcode.com/problems/maximum-subarray/

CODE:

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN,s=0;
        for(int i=0;i<nums.size();i++){
            s=s+nums[i];
            if(s>sum)
            sum=s;
            if(s<0)
            s=0;
        }
        return sum;
    }
};
