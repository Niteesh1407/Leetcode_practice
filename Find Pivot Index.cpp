//link: https://leetcode.com/problems/find-pivot-index/?envType=study-plan&id=level-1

CODE:

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivot=-1;
        for(int i=0;i<nums.size();i++){
            if(accumulate(nums.begin(),nums.begin()+i,0)==
            accumulate(nums.begin()+i+1,nums.end(),0)){
            pivot=i;
            break;
            }
        }
        return pivot;
    }
};
