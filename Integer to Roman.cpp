//link: https://leetcode.com/problems/integer-to-roman/

CODE:

class Solution {
public:
    string intToRoman(int num) {
       string r="",ref="";
       int last_digit,i=0;
       while(num)
       {
           i++;
           last_digit=num%10;
           switch(last_digit)
           {
               case 0:break;
               case 1:if(i==1)
                      ref="I";
                      else if(i==2)
                      ref="X";
                      else if(i==3)
                      ref="C";
                      else
                      ref="M";
                      break;
               case 2:if(i==1)
                      ref="II";
                      else if(i==2)
                      ref="XX";
                      else if(i==3)
                      ref="CC";
                      else 
                      ref="MM";
                      break;
               case 3:if(i==1)
                      ref="III";
                      else if(i==2)
                      ref="XXX";
                      else if(i==3)
                      ref="CCC";
                      else 
                      ref="MMM";
                      break;
               case 4:if(i==1)
                      ref="IV";
                      else if(i==2)
                      ref="XL";
                      else 
                      ref="CD"; 
                      break;
               case 5:if(i==1)
                      ref="V";
                      else if(i==2)
                      ref="L";
                      else
                      ref="D";
                      break;
               case 6:if(i==1)
                      ref="VI";
                      else if(i==2)
                      ref="LX";
                      else
                      ref="DC";
                      break;
               case 7:if(i==1)
                      ref="VII";
                      else if(i==2)
                      ref="LXX";
                      else 
                      ref="DCC";
                      break;
               case 8:if(i==1)
                      ref="VIII";
                      else if(i==2)
                      ref="LXXX";
                      else
                      ref="DCCC";
                      break;
               case 9:if(i==1)
                      ref="IX";
                      else if(i==2)
                      ref="XC";
                      else
                      ref="CM";
                      break;         
           }
           r=ref+r;
           ref="";
           num=num/10;
       } 
       return r;
    }
};
