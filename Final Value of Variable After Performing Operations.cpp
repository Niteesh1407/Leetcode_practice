//link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

CODE:

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res=0;
        for(string s:operations){
            if(s=="++X")
            ++res;
            else if(s=="X++")
            res++;
            else if(s=="X--")
            res--;
            else
            --res;
        }
        return res;
    }
};
