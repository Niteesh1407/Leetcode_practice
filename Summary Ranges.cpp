//link: https://leetcode.com/problems/summary-ranges/

CODE:

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>v;
        if(nums.size()==1){
            v.push_back(to_string(nums[0]));
            return v;
        }
        int i;
        for(i=0;i<nums.size();i++){
            int start=i;
            while(start+1<nums.size() && nums[start+1]==nums[start]+1){
                start++;
            }
            cout<<i<<endl;
            if(start>i){
                v.push_back((to_string(nums[i])+"->"+to_string(nums[start])));
            }
            else{
                v.push_back(to_string(nums[i]));
            }
            i=start;
        }
        return v;
    }
};
