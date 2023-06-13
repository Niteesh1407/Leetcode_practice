//link: https://leetcode.com/problems/equal-row-and-column-pairs/

CODE:

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int c=0;
        int i=0,j=0,k=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    if(grid[i][k]!=grid[k][j])
                    break;
                }
                if(k==n)
                c++;
            }
        }
        return c;
    }
};
