//link: https://leetcode.com/problems/last-stone-weight/

CODE:

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)
        return stones[0];
        sort(stones.begin(),stones.end());
        int s=stones.size();
        if(stones[s-1]==stones[s-2]){
            stones.pop_back();
            stones.pop_back();
            if(stones.size()==0)
            return 0;
        }
        else{
            stones[s-2]=stones[s-1]-stones[s-2];
            stones.pop_back();
        }
        return lastStoneWeight(stones);
        return 0;
    }
};
