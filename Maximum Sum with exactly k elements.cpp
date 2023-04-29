//link: https://leetcode.com/contest/biweekly-contest-103/problems/maximum-sum-with-exactly-k-elements/

CODE:

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int r=0;
        while(k--){
            r+=nums[nums.size()-1]++;
        }
        return r;
    }
};
