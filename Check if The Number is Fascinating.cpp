//link: https://leetcode.com/contest/biweekly-contest-106/problems/check-if-the-number-is-fascinating/

CODE:

class Solution {
public:
    bool isFascinating(int n) {
        int x=2*n;
        int y=3*n;
        string s=to_string(n)+(to_string)(x)+(to_string)(y);
        if(s.size()>9 || count(s.begin(),s.end(),'0'))
            return false;
        int i;
        for(i=0;i<9;i++){
            if(count(s.begin(),s.end(),s[i])!=1)
                break;
        }
        if(i==9)
            return true;
        else
            return false;
    }
};
