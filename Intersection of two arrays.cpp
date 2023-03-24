//link: https://leetcode.com/problems/intersection-of-two-arrays/

CODE:

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            if(count(nums2.begin(),nums2.end(),nums1[i]) && count(v.begin(),v.end(),nums1[i])==0)
                v.push_back(nums1[i]);
        }
        return  v;
    }
};
