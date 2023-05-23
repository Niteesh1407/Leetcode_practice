//link: https://leetcode.com/problems/delete-greatest-value-in-each-row/

CODE:

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int s=0;
        int m=grid.size();
        int n=grid[0].size();
        while(n--){
            int M=-1;
            for(int i=0;i<m;i++){
                int m=*max_element(grid[i].begin(),grid[i].end());
                M=max(M,m);
                auto in=find(grid[i].begin(),grid[i].end(),m);
                grid[i].erase(in);
                cout<<m<<endl;
            }
            s=s+M;
        }
        return s;
    }
};
