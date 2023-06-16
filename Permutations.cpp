//link: https://leetcode.com/problems/permutations/

CODE:

class Solution {
public:
    void cal(int l,int h,vector<int> v,vector<vector<int>> &res){
        if(l>=h-1)
        {
            res.push_back(v);
            return;
        }
        for(int i=l;i<h;i++){
            swap(v[i],v[l]);
            cal(l+1,h,v,res);
            swap(v[i],v[l]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        int n=nums.size();
        cal(0,n,nums,res);
        return res;
    }
};
