//link: https://leetcode.com/problems/count-good-triplets/

CODE:

class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            int x=arr[i];
            for(int j=i+1;j<n;j++){
                int y=arr[j];
                for(int k=j+1;k<n;k++){
                    int z=arr[k];
                    if(abs(x-y)<=a && abs(y-z)<=b && abs(z-x)<=c)
                    count++;
                }
            }
        }
        return count;
    }
};
