//link: https://leetcode.com/problems/check-if-it-is-a-straight-line/

CODE:

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        float m,k=(float)(coordinates[1][1]-coordinates[0][1])/(coordinates[1][0]-coordinates[0][0]);
        int i;
        for(i=0;i<n-1;i++){
            if(coordinates[i+1][0]==0 && coordinates[i][0]==0)
            continue;
            m=(float)(coordinates[i+1][1]-coordinates[i][1])/(coordinates[i+1][0]-coordinates[i][0]);
            if(m!=k)
            break;
            k=(float)m;
        }
        if(i==(n-1))
        return true;
        return false;
    }
};
