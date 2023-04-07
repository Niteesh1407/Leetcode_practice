//link: https://leetcode.com/problems/the-kth-factor-of-n/

CODE:

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>v;
        if(n==1)
        return 1;
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                if(count(v.begin(),v.end(),i)==0)
                v.push_back(i);
                if(count(v.begin(),v.end(),n/i)==0)
                v.push_back(n/i);
            }
        }
        sort(v.begin(),v.end());
        if(v.size()<k)
        return -1;
        else
        return v[k-1];
    }
};
