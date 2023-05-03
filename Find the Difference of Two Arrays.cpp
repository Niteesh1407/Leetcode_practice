//link: https://leetcode.com/problems/find-the-difference-of-two-arrays/

CODE:

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        vector<vector<int>>v={{},{}};
        for( auto val: s1){
            if(s2.count(val)==0)
            v[0].push_back(val);
        }
        for(auto val:s2){
            if(s1.count(val)==0)
            v[1].push_back(val);
        }
        return v;
    }
};
