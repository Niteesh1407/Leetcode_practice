//link: https://leetcode.com/problems/asteroid-collision/

CODE:

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int>s;
        for(int i:asteroids){
            int flag=1;
            while(!s.empty() && s.top()>0 && i<0){
                if(abs(s.top()) < abs(i)){
                    s.pop();
                    continue;
                }
                else if(abs(s.top())==abs(i)){
                    s.pop();
                }
                flag=0;
                break;
            }
            if(flag)
            s.push(i);
        }
        vector<int>v(s.size());
        for(int i=s.size()-1;i>=0;i--){
            v[i]=s.top();
            s.pop();
        }
        return v;
    }
};
