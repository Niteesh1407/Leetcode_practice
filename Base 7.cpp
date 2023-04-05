//link:  https://leetcode.com/problems/base-7/

CODE:

class Solution {
public:
    string convertToBase7(int num) {
        int k=abs(num);
        string s="";
        while(k>=7){
            int r=k%7;
            s=to_string(r)+s;
            k=k/7;
        }
        s=to_string(k)+s;
        if(num<0)
        s="-"+s;
        return s;
    }
};
