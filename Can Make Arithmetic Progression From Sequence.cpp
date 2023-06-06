https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/

CODE:

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size(),i=0;
        int k=arr[i]-arr[i+1];
        for(i=1;i<n-1;i++){
            if(arr[i]-arr[i+1]!=k)
            {
                break;
            }
        }
        if(i==(n-1))
        return true;
        return false;
    }
};
