//link: https://leetcode.com/problems/non-overlapping-intervals/

CODE:

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int res=-1;
        sort(intervals.begin(),intervals.end(),[&](auto const & a,auto const & b){
            return a[1]<b[1];
        });
        vector<int>v=intervals[0];
        for(vector<int> i:intervals){
            if(i[0]<v[1])
            res++;
            else
            v=i;
        }
        return res;
    }
};
