//link: https://leetcode.com/contest/biweekly-contest-102/problems/find-the-width-of-columns-of-a-grid/

CODE:

class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int>r;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<n;i++){
            int l=0;
            for(int j=0;j<m;j++){
                string s=to_string(grid[j][i]);
                l=max(l,(int)s.length());
            }
            r.push_back(l);
        }
        return r;
    }
};
