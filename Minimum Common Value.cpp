//link:  https://leetcode.com/contest/biweekly-contest-96/problems/minimum-common-value/

CODE:

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int l1,l2;
        l1=nums1.size();
        l2=nums2.size();
        for(int i=0;i<l1;i++)
        {
            int j=0;
            while(nums1[i]>=nums2[j])
            {
                if(nums1[i]==nums2[j])
                {
                    return nums1[i];
                }
                j++;
            }
        }
        return -1;
    }
};
