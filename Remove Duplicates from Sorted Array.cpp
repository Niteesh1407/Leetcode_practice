//link: https://leetcode.com/problems/maximum-product-of-three-numbers/

CODE:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(count(v.begin(),v.end(),nums[i])==0)
            v.push_back(nums[i]);
        }
        int k=v.size();
        nums.resize(k);
        for(int i=0;i<k;i++){
            nums[i]=v[i];
        }
        return nums.size();
    }
};
