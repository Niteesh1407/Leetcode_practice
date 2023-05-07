//link: https://leetcode.com/problems/find-the-longest-valid-obstacle-course-at-each-position/

CODE:

class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        int n=obstacles.size();
        vector<int>v(n,1);
        vector<int>v1;
        for(int i=0;i<n;i++){
            int k=upper_bound(v1.begin(),v1.end(),obstacles[i])-v1.begin();
            cout<<k;
            if(k==v1.size())
            v1.push_back(obstacles[i]);
            else
            v1[k]=obstacles[i];
            v[i]=k+1;
        }
        return v;
    }
};
