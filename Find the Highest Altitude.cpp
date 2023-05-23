//link : https://leetcode.com/problems/find-the-highest-altitude/

CODE:

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>v;
        int s=0;
        v.push_back(s);
        for(int val:gain){
            s+=val;
            v.push_back(s);
        }
        int k=*max_element(v.begin(),v.end());
        return k;
    }
};
