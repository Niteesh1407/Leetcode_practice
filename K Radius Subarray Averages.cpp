//link: https://leetcode.com/problems/k-radius-subarray-averages/

CODE:

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<long long>cs(n);
        cs[0]=nums[0];
        for(int i=1;i<n;i++){
            cs[i]=cs[i-1]+nums[i];
        }
        vector<int>res(n);
        for(int i=0;i<n;i++){
            if(i-k>=0 && i+k<=n-1){
                res[i]=(cs[i+k]-cs[i-k]+nums[i-k])/(2*k+1);
            }
            else{
                res[i]=-1;
            }
        }
        return res;
    }
};
