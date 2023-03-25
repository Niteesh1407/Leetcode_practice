//link: https://leetcode.com/problems/plus-one/

CODE:

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l=digits.size()-1;
        int c=0;
        vector<int>res;
        while(l>=0){
            if(digits[l]<9){
                digits[l]++;
                return digits;
            }
            if(digits[l]==9){
                digits[l]=0;
                l--;
                c=1;
            }
        }
        if(c==1){
            digits.push_back(0);
            digits[0]=1;
        }
        return digits;
    }
};
