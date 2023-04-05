//link: https://leetcode.com/problems/power-of-two/

CODE:

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
        return false;
        if((log2(n))==(floor)(log2(n)))
        return true;
        else
        return false;
    }
};
