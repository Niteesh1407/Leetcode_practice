//link: https://leetcode.com/problems/roman-to-integer/

CODE:

class Solution {
public:
    int romanToInt(string s) {
    int r=0,x,f=0,i=0;
    char ch1,ch2;
    for(i=0;i<s.size()-1;i++)
    {
        ch1=s.at(i);
        ch2=s.at(i+1);
        if(setk(ch1)<setk(ch2))          //taking two characters at a time
        {
            x=setk(ch2)-setk(ch1);
            r=r+x;
            i=i+1;
            f=1;
        }
        else 
        {
            x=0;
            r=r+setk(ch1);
            f=0;
        }
    }
    if(i!=s.size()-1)
    return r;
    else
    return r+setk(s.at(s.size()-1));
    }
    int setk(char ch)     //setting up values for roman numerals
    {
        int k;
        switch(ch)
        {
            case 'I':k=1;break;
            case 'V':k=5;break;
            case 'X':k=10;break;
            case 'L':k=50;break;
            case 'C':k=100;break;
            case 'D':k=500;break;
            case 'M':k=1000;break;
        }
        return k;
    }   
};
