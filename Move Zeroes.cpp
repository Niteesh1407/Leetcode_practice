//link: https://leetcode.com/problems/move-zeroes/

CODE:

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v;
        int c=0,i;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=0)
            v.push_back(nums[i]);
            else
            c++;
        }
        for(i=0;i<v.size();i++){
            nums[i]=v[i];
        }
        while(c--){
            nums[i++]=0;
        }
    }
};
