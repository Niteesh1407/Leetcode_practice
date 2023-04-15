//link: https://leetcode.com/contest/biweekly-contest-102/problems/find-the-score-of-all-prefixes-of-an-array/

CODE:

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>v;
        vector<long long>r;
        long long k=0;
        for(int i=0;i<nums.size();i++){
            if(k<nums[i])
                k=nums[i];
            v.push_back(nums[i]+k);
        }
        long long s=0;
        for(int i=0;i<v.size();i++){
            s=s+v[i];
            r.push_back(s);
        }
        return r;
    }
};
