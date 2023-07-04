//link: https://leetcode.com/problems/single-number-ii/

CODE:

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int o=0,t=0;
        int bm;
        for(int i=0;i<nums.size();i++){
            t = t | (o & nums[i]);
            o = o ^ nums[i];
            bm = ~(o & t);
            o&=bm;
            t&=bm;
        }
        return o;
    }
};
