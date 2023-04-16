//link: https://leetcode.com/contest/weekly-contest-341/problems/row-with-maximum-ones/

CODE:

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>v(2);
        int k=0;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1)
                    count++;
            }
            if(k<count){
                    k=count;
                    v[0]=i;
                    v[1]=count;
                }
        }
        return v;
    }
};
