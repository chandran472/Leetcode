class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mins=prices[0];
        int maxs=-1;
        int profit=0;
        for(int i=1;i<n;i++)
        {
            int cost=prices[i]-mins;
            profit=max(profit,cost);
            mins=min(mins,prices[i]);
        }
        return profit;
    }
};