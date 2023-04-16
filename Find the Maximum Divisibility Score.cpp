//link: https://leetcode.com/contest/weekly-contest-341/problems/find-the-maximum-divisibility-score/

CODE:

class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        map<int,int>m;
        for(int i=0;i<divisors.size();i++){
            int count=0;
            m[divisors[i]]=0;
            for(int j=0;j<nums.size();j++){
                
                if(nums[j]%divisors[i]==0){
                    m[divisors[i]]++;
                }
            }
        }
        auto k=m.begin();
        int r=(k->first);
        int c=0;
        for(auto it:m){
            if(it.second > c){
                c=it.second;
                r=it.first;
            }
        }
        return r;
    }
};
