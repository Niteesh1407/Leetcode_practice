//link: https://leetcode.com/problems/set-matrix-zeroes/

CODE:

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>r;
        vector<int>c;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0)
                {
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        for(int i:r){
            int j=0;
            while(j<matrix[i].size()){
                matrix[i][j]=0;
                j++;
            }
        }
        for(int i:c){
            int j=0;
            while(j<matrix.size()){
                matrix[j][i]=0;
                j++;
            }
        }
    }
};
