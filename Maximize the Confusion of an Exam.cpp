//link: https://leetcode.com/problems/maximize-the-confusion-of-an-exam/

CODE:

class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int res=0;
        unordered_map<char,int>m;
        for(int i=0;i<answerKey.length();i++){
            m[answerKey[i]]++;
            int x=min(m['T'],m['F']);
            if(x<=k)
            res++;
            else
            m[answerKey[i-res]]--;
        }
        return res;
    }
};
