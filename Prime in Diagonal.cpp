//link: https://leetcode.com/contest/weekly-contest-340/problems/prime-in-diagonal/

CODE:

class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int prime = 0;
        int n = nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j || (i+j) == n-1)
                    v.push_back(nums[i][j]);
            }
        }
        for(int i=0;i<v.size();i++){
            int k=v[i];
            int flag=0;
            for(int j=2;j<=sqrt(k);j++){
                if(k%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0 && k>prime && k!=1){
                prime=k;
            }
        }
        return prime;
    }
};
