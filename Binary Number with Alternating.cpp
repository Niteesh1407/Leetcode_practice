//link:  https://leetcode.com/problems/binary-number-with-alternating-bits/

CODE:

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int c=n%2;
        n=n/2;
        while(n){
            int k=n%2;
            n/=2;
            if(k==c)
            return false;
            c=k;
        }
        return true;
    }
};
