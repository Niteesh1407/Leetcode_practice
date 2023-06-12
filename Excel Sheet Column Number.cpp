//link: https://leetcode.com/problems/excel-sheet-column-number/

CODE:

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        int res=0;
        for(int i=n-1;i>=0;i--){
            int k=columnTitle[i]-'A'+1;
            res=res+(k*(pow(26,n-i-1)));
        }
        return res;
    }
};
