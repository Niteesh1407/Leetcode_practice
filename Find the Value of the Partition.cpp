//link: https://leetcode.com/contest/weekly-contest-350/problems/find-the-value-of-the-partition/

CODE:

class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=INT_MAX,a,b;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]<k){
                a=i;
                b=i+1;
                k=nums[i+1]-nums[i];
            }
        }
        return nums[b]-nums[a];
    }
};
