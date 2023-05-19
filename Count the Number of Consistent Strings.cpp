//link: https://leetcode.com/problems/count-the-number-of-consistent-strings/

CODE:

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int c=0;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            int n=s.size();
            int j;
            for(j=0;j<n;j++){
                if(find(allowed.begin(),allowed.end(),s[j])==allowed.end())
                break;
            }
            if(j==n)
            c++;
        }
        return c;
    }
};
