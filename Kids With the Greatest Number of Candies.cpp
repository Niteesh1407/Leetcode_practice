//link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

CODE:

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        int big=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= big)
                v.push_back(true);
            else
                v.push_back(false);
        }
        return v;
    }
};
