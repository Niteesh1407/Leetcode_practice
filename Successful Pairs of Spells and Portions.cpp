//link: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/

CODE:

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>r;
        sort(potions.begin(),potions.end());
        vector<int>ans;
        for(int i = 0;i < spells.size();i++){
            long long req = success / spells[i];
            if(success % spells[i] != 0){
                req++;
            }
            int pos = lower_bound(potions.begin(),potions.end(),req) - potions.begin();
            ans.push_back(potions.size() - pos);
        }
        return ans;
    }
};
