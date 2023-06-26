//link: https://leetcode.com/problems/pascals-triangle-ii/

CODE:

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex+1;
        vector<vector<int>>v(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || i==j)
                v[i].push_back(1);
                else
                v[i].push_back(v[i-1][j-1]+v[i-1][j]);
            }
        }
        return v[n-1];
    }
};
