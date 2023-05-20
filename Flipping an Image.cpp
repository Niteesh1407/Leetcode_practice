//link: https://leetcode.com/problems/flipping-an-image/

CODE:

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        vector<vector<int>>v(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[i].push_back(image[i][n-1-j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]==1)
                v[i][j]=0;
                else
                v[i][j]=1;
            }
        }
        return v;
    }
};
