//link: https://leetcode.com/problems/boats-to-save-people/

CODE:

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0,j=people.size()-1;
        int r=0;
        sort(people.begin(),people.end());
        while(i<=j){
          if(people[i]>=limit){
              r=r+people.size()-i;
              return r;
          }  
          if(people[i]+people[j]<=limit){
            ++i;
            --j;
          }
          else{
            --j;
          }
          r++;
        }
        return r;
    }
};
