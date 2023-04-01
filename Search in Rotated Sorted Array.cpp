//link:  https://leetcode.com/problems/search-in-rotated-sorted-array/

CODE:

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k=find(nums.begin(),nums.end(),target)-nums.begin();
        sort(nums.begin(),nums.end());
        if(binary_search(nums.begin(),nums.end(),target))
        return k;
        else
        return -1;
    }
};
