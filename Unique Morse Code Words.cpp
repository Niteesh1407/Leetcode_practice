//link: https://leetcode.com/problems/unique-morse-code-words/

CODE:

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string>st;
        vector<string>v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i=0;i<words.size();i++){
            string s=words[i];
            string str="";
            for(int i=0;i<s.size();i++){
                str=str+v[s[i]-97];
            }
            st.insert(str);
        }
        return st.size();
    }
};
