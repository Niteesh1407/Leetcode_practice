//link: https://leetcode.com/problems/number-of-arithmetic-triplets/

CODE:

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(find(nums.begin()+i,nums.end(),nums[i]+diff)!=nums.end()){
                int k=find(nums.begin(),nums.end(),nums[i]+diff)-nums.begin();
                if(find(nums.begin()+k,nums.end(),nums[i]+diff+diff)!=nums.end()){
                    c++;
                }
            }
        }
        return c;
    }
};
