//link: https://leetcode.com/problems/separate-the-digits-in-an-array/

CODE:

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int k=nums[i];
            vector<int>v1;
            while(k){
                v1.push_back((k%10));
                k/=10;
            }
            reverse(v1.begin(),v1.end());
            for(int val:v1){
                v.push_back(val);
            }
        }
        return v;
    }
};
