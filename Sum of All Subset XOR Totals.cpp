//link: https://leetcode.com/problems/sum-of-all-subset-xor-totals/

CODE:

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int res,k=0;
        for(int i=0;i<n;i++){
            k=k|nums[i];
        }
        res=k*pow(2,n-1);
        return res;
    }
};
