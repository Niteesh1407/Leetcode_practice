//link: https://leetcode.com/problems/optimal-partition-of-string/

CODE:

class Solution {
public:
    int partitionString(string s) {
        int c=0;
        string str="";
        vector<string>v;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(str.find(ch)!= string::npos){
                c++;
                str=ch;
            }
            else
                str=str+ch;
        }
        return c+1;
    }
};
