//link: https://leetcode.com/problems/count-items-matching-a-rule/

CODE:

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n=items.size();
        int c=0;
        if(ruleKey=="type"){
            for(int i=0;i<n;i++)
            if(ruleValue==items[i][0])
            c++;
        }
        else if(ruleKey=="color"){
            for(int i=0;i<n;i++)
            if(ruleValue==items[i][1])
            c++;
        }
        else{
            for(int i=0;i<n;i++)
            if(ruleValue==items[i][2])
            c++;
        }
        return c;
    }
};
