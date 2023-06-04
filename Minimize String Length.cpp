//link: https://leetcode.com/contest/weekly-contest-348/problems/minimize-string-length/

CODE:
class Solution {
public:
    int minimizedStringLength(string s) {
        int n=s.size();
        set<char>s1;
        for(int i=0;i<n;i++){
            s1.insert(s[i]);
        }
        return s1.size();
    }
};
