//link: https://leetcode.com/problems/minimum-cost-to-make-array-equal/

CODE:

class Solution {
public:
    long long med(vector<int>&nums,vector<int>&cost,long long m){
        long long res=0;
        for(int i=0;i<nums.size();i++){
            res=res+(long long)(abs(nums[i]-m)*(cost[i]));
        }
        return res;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long t=0,s=0;
        int n=nums.size();
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],cost[i]});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            s=s+v[i].second;
        }
        long long m;
        int i=0;
        while(t<(s+1)/2 && i<n){
            t=(long long)(t+v[i].second);
            m=v[i].first;
            i++;
        }
        return med(nums,cost,m);
    }
};
