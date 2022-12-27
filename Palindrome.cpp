//link: https://leetcode.com/problems/palindrome-number/submissions/866201006/

CODE:

class Solution {
public:
    bool isPalindrome(int x) {
     long long k=x,s=0;
     while(x>0)
     {
         int r=x%10;
         s=s*10+r;
         x=x/10;
     } 
     if(k==s)
     return true;
     else 
     return false;  
    }
};
