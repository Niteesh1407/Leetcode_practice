//link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/

CODE:

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<int>free(n);
        vector<int>hold(n);
        hold[0]=-prices[0];
        for(int i=1;i<n;i++){
            free[i]=max(free[i-1],hold[i-1]+prices[i]-fee);
            hold[i]=max(hold[i-1],free[i-1]-prices[i]);
        }
        return free[n-1];
    }
};
