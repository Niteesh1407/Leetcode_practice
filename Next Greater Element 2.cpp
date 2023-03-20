//link:  https://leetcode.com/problems/next-greater-element-ii/description/

CODE:

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>r(nums.size(),-1);
        stack<int>s;
        int k=nums.size();
        nums.resize(k*2);
        for(int i=k;i<nums.size();i++){
            nums[i]=nums[i-k];
        }
        for(size_t i=0;i<2*k;i++){
            while(!s.empty() && nums[i]>nums[s.top()]){
                 if(s.top() >= k) 
                {
                    s.top() = s.top() - k;
                }
                r[s.top()]=nums[i];
                s.pop();
            }
            s.push(i);
        }
        return r;
    }
};
