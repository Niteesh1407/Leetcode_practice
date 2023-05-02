//link: https://leetcode.com/problems/sign-of-the-product-of-an-array/

CODE:

class Solution {
public:
    int arraySign(vector<int>& nums) {
        if(count(nums.begin(),nums.end(),0))
        return 0;
        int c=0;
        for(int val:nums){
            if(val<0)
            c++;
        }
        if(c%2==0)
        return 1;
        else 
        return -1;
    }
};
