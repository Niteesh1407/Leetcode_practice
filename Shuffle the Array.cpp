//link: https://leetcode.com/problems/shuffle-the-array/


CODE:

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v(2*n);
        int j=0;
        for(int i=0;i<n;i++){
            v[j++]=nums[i];
            v[j++]=nums[i+n];
        }
        return v;
    }
};
