//link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

CODE:

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int c=0;
        for(string s:sentences){
            if(count(s.begin(),s.end(),' ')>c)
            c=count(s.begin(),s.end(),' ');
        }
        return c+1;
    }
};
