class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int temp;

        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                temp = prices[j] - prices[i];
                if (temp>profit)
                {
                    profit = temp;
                }
            }
        }

        if (profit > 0)
        {
            return profit;
        }
        else
        {
            return 0;
        }
    }
};
