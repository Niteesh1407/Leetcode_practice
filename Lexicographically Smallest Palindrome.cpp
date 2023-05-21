//link: https://leetcode.com/contest/weekly-contest-346/problems/lexicographically-smallest-palindrome/

CODE:

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        auto f=s.begin();
        auto l=s.end()-1;
        int n=s.size();
        while((f-s.begin())!=n/2){
            if(*f>*l)
                *f=*l;
            else if(*f<*l)
                *l=*f;
            else{
                ++f;
                --l;
            }
        }
        return s;
    }
};
