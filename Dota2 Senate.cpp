//link: https://leetcode.com/problems/dota2-senate/

CODE:

class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>q1;
        queue<int>q2;
        int n=senate.length();
        for(int i=0;i<n;i++){
            if(senate[i]=='R')
            q1.push(i);
            else
            q2.push(i);
        }
        while(!q1.empty() && !q2.empty()){
            if(q1.front()<q2.front()){
                q2.pop();
                int k=q1.front();
                q1.pop();
                q1.push(k+n);
            }
            else{
                q1.pop();
                int k=q2.front();
                q2.pop();
                q2.push(k+n);
            }
        }
        return q1.empty()?"Dire":"Radiant";   
    }
};
