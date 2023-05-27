//link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

CODE:

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        auto f=numbers.begin();
        auto l=numbers.end()-1;
        while((*f)+(*l) != target){
            if((*f)+(*l)>target)
            --l;
            else
            ++f;
        }
        v.push_back((f-numbers.begin())+1);
        v.push_back((l-numbers.begin())+1);
        return v;
    }
};
