//link: https://leetcode.com/problems/longest-substring-without-repeating-characters/

CODE:

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0,j=0;
        int l=0,ml=0;
        while(i<n && j<n){
            j=i+1;
            set<char>st;
            st.insert(s[i]);
            while(j<n && find(st.begin(),st.end(),s[j])==st.end()){
                st.insert(s[j]);
                j++;
            }
            l=j-i;
            ml=max(ml,l);
            i++;
        }
        return ml;
    }
};
