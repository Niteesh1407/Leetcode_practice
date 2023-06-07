//link: https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/

CODE:

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int r=0;
        while(a>0 || b>0 || c>0){
            if((c&1)==0)
            r=r+(a&1)+(b&1);
            else{
                if((a&1)==0 && (b&1)==0)
                r=r+1;
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return r;
    }
};
