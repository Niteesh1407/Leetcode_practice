//link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

CODE:

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int c=0;
        int i=0,j=grid[0].size()-1;
        while(i<n && j>=0){
            if(grid[i][j]<0){
                c=c+n-i;
                j--;
            }
            else if(grid[i][j]>=0){
                i++;
            }
        }
        return c;
    }
};
