//link: https://leetcode.com/problems/excel-sheet-column-title/

CODE:

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber>0){
            int r=columnNumber%26;
            char ch;
            if(r==0){
                ch='Z';
                columnNumber=(columnNumber/26)-1;
            }
            else{
                ch='A'+r-1;
                columnNumber=columnNumber/26;
            }
            s=ch+s;
        }
        return s;
    }
};
