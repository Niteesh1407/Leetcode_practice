//link: https://leetcode.com/problems/maximum-value-of-k-coins-from-piles/

CODE:

class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        vector<int> mv(k + 1), pileSum(k + 1);
        for (auto pile : piles) { 
            int n = min(k, (int)pile.size()); 
            int sum = 0;
            for (int i = 1; i <= n; i++)
                pileSum[i] = sum += pile[i - 1]; 
            for (int i = k; i > 0; i--) { 
                int maxVal = 0;
                for (int j = min(i, n); j >= 0; j--) 
                    maxVal = max(maxVal, pileSum[j] + mv[i - j]); 
                mv[i] = maxVal;
            }
        }
        return mv[k]; 
    }
};
