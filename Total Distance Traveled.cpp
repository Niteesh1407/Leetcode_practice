//link: https://leetcode.com/contest/weekly-contest-350/problems/total-distance-traveled/

CODE:

class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        long long res=0;
        while(mainTank>4){
            if(additionalTank){
                mainTank=mainTank-5+1;
                additionalTank=additionalTank-1;
            }
            else
            mainTank=mainTank-5;
            res=(long long)res+50;
        }
        res=res+mainTank*10;
        return res;
    }
};
