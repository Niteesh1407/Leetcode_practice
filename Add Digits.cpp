//link:  https://leetcode.com/problems/add-digits/

CODE:

class Solution {
public:
    int addDigits(int num) {
       if(num/10==0)
       return num;
       int sum=0;
       while(num){
           sum=sum+(num%10);
           num=num/10;
       }
       return addDigits(sum);
    }
};
