//link:  https://leetcode.com/problems/counting-bits/

CODE:

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v(n+1);
        if(n==0){
            return v;
        }
        for(int i=0;i<v.size();i++){
           string bi=binary(i);
           int c=count(bi.begin(),bi.end(),'1');
           v[i]=c;
        }
        return v;
    }
    string binary(int k){
        string s="";
        for(int i=18;i>=0;i--){
            s=s+(to_string)((k>>i)&1);
        }
        return s;
    }
};
