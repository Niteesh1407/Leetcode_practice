//link: https://leetcode.com/problems/find-the-duplicate-number/

CODE:

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,k=0;
        for(i=0;i<nums.size()-1;i++){
            k=nums[i+1]^nums[i];
            if(k==0)
            break;
        }
        return nums[i];
    }
};
