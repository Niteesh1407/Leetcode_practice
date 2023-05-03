//link: https://leetcode.com/problems/concatenation-of-array/

CODE:

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>v(nums.size()*2);
        for(int i=0;i<nums.size();i++){
            v[i]=nums[i];
            v[i+nums.size()]=nums[i];
        }
        return v;
    }
};
