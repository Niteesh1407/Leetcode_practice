//link: https://leetcode.com/problems/maximum-gap/

CODE:

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)
        return 0;
        sort(nums.begin(),nums.end());
        int k=0;
        for(int i=0;i<nums.size()-1;i++){
            if(abs(nums[i]-nums[i+1])>k)
            k=abs(nums[i]-nums[i+1]);
        }
        return k;
    }
};
