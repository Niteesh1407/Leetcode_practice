//link: https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/

CODE:

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n=rectangles.size();
        vector<int>squares;
        for(int i=0;i<n;i++){
            int m=*min_element(rectangles[i].begin(),rectangles[i].end());
            squares.push_back(m);
        }
        int c;       
        int m=*max_element(squares.begin(),squares.end());
        c=count(squares.begin(),squares.end(),m);
        return c;
    }
};
