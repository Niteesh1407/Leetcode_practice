//link: https://leetcode.com/problems/find-smallest-letter-greater-than-target/

CODE:

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char r=letters[0];
        for(char ch:letters){
            if(ch>target){
                r=ch;
                break;
            }
        }
        return r;
    }
};
