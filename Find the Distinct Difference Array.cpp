//link: https://leetcode.com/contest/weekly-contest-344/problems/find-the-distinct-difference-array/

CODE:

class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int>v1(nums.size());
        for(int i=0;i<nums.size();i++){
            set<int>s1(nums.begin(),nums.begin()+i+1);
            set<int>s2(nums.begin()+i+1,nums.end());
            v1[i]=s1.size()-s2.size();
        }
        
        return v1;
    }
};
