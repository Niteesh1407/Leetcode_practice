//link: https://leetcode.com/problems/validate-stack-sequences/

CODE:

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int j=0;
        for(auto val:pushed){
            s.push(val);
            while(s.size()>0 && s.top()==popped[j]){
                s.pop();
                j++;
            }
        }
        return s.empty();
    }
};
