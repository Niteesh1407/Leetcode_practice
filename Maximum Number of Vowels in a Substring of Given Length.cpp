//link: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

CODE:

class Solution {
public:
    int maxVowels(string s, int k) {
        string sub=s.substr(0,k);
        int c=0;
        set<char>v{'a','e','i','o','u'};
        for(int i=0;i<sub.length();i++){
            c=c+v.count(sub[i]);
        }
        int r=c;
        for(int i=k;i<s.size();i++){
            c=c+v.count(s[i])-v.count(s[i-k]);
            r=max(r,c);
        }
        return r;
    }
};
