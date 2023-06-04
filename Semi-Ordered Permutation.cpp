//link: https://leetcode.com/contest/weekly-contest-348/problems/semi-ordered-permutation/

CODE:

class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n=nums.size();
        int in1=find(nums.begin(),nums.end(),1)-nums.begin();
        int in2=find(nums.begin(),nums.end(),n)-nums.begin();
        cout<<in1<<" "<<in2;
        if(in1<in2)
            return in1+(n-1-in2);
        else{
            int k=in1-in2;
            in1=in1-k;
            in2=in1+1;
            return k+in1+(n-1-in2);
        }
    }
};
