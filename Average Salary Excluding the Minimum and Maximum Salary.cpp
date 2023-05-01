//link: https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

CODE:

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double sum=accumulate(salary.begin(),salary.end(),0)-salary[0]-salary[salary.size()-1];
        double avg=sum/(salary.size()-2);
        return avg;
    }
};
