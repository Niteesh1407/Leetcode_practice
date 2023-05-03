//link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

CODE:

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v(nums.size());
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i])
                c++;
            }
            v[i]=c;
        }
        return v;
    }
};
