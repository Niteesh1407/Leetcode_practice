//link: https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/

CODE:

class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        while(num){
            int r=num%10;
            v.push_back(r);
            num=num/10;
        }
        sort(v.begin(),v.end());
        int a=v[0]*10+v[3];
        int b=v[1]*10+v[2];
        return a+b;
    }
};
