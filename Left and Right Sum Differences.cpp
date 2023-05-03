//link: https://leetcode.com/problems/left-and-right-sum-differences/

CODE:

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int>v(nums.size());
        v[0]=abs(accumulate(nums.begin()+1,nums.end(),0));
        v[nums.size()-1]=abs(accumulate(nums.begin(),nums.end()-1,0));
        for(int i=1;i<nums.size()-1;i++){
            v[i]=abs(accumulate(nums.begin(),nums.begin()+i+1,0)-accumulate(nums.begin()+i,nums.end(),0));
        }
        return v;
    }
};
