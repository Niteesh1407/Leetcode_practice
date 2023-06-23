//link: https://leetcode.com/problems/task-scheduler/

CODE:

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>v(26);
        int mf=0;
        for(char ch:tasks){
            v[ch-'A']++;
            mf=max(mf,v[ch-'A']);
        }
        int mc=0;
        int N=tasks.size();
        for(int i=0;i<v.size();i++){
            if(mf==v[i])
            mc++;
        }
        int t=(mf-1)*(n+1)+mc;
        t=max(t,N);
        return t;
    }
};
