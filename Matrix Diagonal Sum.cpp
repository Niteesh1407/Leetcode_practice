//link: https://leetcode.com/problems/matrix-diagonal-sum/

CODE:

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int s=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j || (i+j)==n-1)
                s=s+mat[i][j];
            }
        }
        return s;
    }
};
