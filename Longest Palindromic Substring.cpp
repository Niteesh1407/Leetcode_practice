//link: https://leetcode.com/problems/longest-palindromic-substring/

CODE:

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        string str;
        int low,high,ml=1,start;
        if(n<2){
            return s;
        }
        for(int i=0;i<n;i++){
            low=i-1;
            high=i+1;
            while(high<n && s[i]==s[high]){
                high++;
            }
            while(low>=0 && s[i]==s[low]){
                low--;
            }
            while(low>=0 && high<n && s[low]==s[high]){
                low--;
                high++;
            }
            int l=high-low-1;
            if(ml<l){
                ml=l;
                start=low+1;
            }
        }
        if(ml==1)
        return s.substr(0,1);
        return s.substr(start,ml);
    }
};
