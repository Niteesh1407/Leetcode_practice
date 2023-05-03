//link: https://leetcode.com/problems/richest-customer-wealth/

CODE:

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res=0;
        for(vector<int> v:accounts){
            if(accumulate(v.begin(),v.end(),0)>res)
            res=accumulate(v.begin(),v.end(),0);
        }
        return res;
    }
};
