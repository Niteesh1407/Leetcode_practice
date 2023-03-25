//link:  https://leetcode.com/problems/happy-number/description/

CODE:

class Solution {
public:
    bool isHappy(int n) {
        if(n==1 || n==7)
        return true;
        else if(n<10)
        return false;
        int sum=0;
        while(n){
            sum=sum+(n%10)*(n%10);
            n=n/10;
        }
        return isHappy(sum);
    }
};
