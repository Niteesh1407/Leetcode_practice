//link:  https://leetcode.com/problems/valid-parentheses/

CODE:

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        map<char,int>m{{'(',1},{'{',2},{'[',3},{')',-1},{'}',-2},{']',-3}};
        for(char ch: s){
            if(m[ch]>0)
            st.push(ch);
            if(m[ch]<0){
                if(st.empty())
                return false;
                if(m[st.top()]+m[ch]==0)
                st.pop();
                else
                return false;
            }
        }
        if(st.empty())
        return true;
        else
        return false;
    }
};
