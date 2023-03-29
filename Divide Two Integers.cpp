//link: https://leetcode.com/problems/divide-two-integers/

CODE:

class Solution {
public:
    int divide(int dividend, int divisor) {
        long k=(long)dividend/divisor;
        if(k<INT_MIN)
        return INT_MIN;
        else if(k>INT_MAX)
        return INT_MAX;
        else
        return k;
    }
};
