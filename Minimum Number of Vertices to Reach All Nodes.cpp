//link: https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/

CODE:

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>v(n,0);
        for(auto edge:edges){
            v[edge[1]]++;
        }
        vector<int >res;
        for(int i=0;i<n;i++){
            if(v[i]==0)
            res.push_back(i);
        }
        return res;
    }
};
