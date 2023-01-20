//link: https://leetcode.com/problems/reverse-integer/

CODE:

class Solution {
public:
    int reverse(int x) {
        long s=0,d,k;
        k=x;
        if(k<0)
        k=k*(-1);
        while(k)
        {
            d=k%10;
            s=s*10+d;
            k=k/10;
        }    
        if(s<=INT_MAX && s>=INT_MIN)
        {
            if(x<0)
            return 0-s;
            else
            return s;
        }
        else
        return 0;
        
    }
};
