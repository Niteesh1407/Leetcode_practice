//link: https://leetcode.com/problems/lexicographically-smallest-string-after-substring-operation/

CODE:

class Solution {
public:
    string smallestString(string s) {
        int n=s.size(),in=-1;
        for(int i=0;i<n;i++){
            if(s[i]!='a'){
                in=i;
                break;
            }
        }
        if(in==-1){
            s[n-1]='z';
            return s;
        }
        for(int i=in;i<n;i++){
            if(s[i]!='a')
            s[i]--;
            else
            break;
        }
        return s;
    }
};
