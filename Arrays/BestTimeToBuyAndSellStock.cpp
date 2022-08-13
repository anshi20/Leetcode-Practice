class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, n = prices.size();
        int minimum = prices[0];
        for(int i=1;i<n;i++)
        {
           minimum = min(minimum,prices[i]);
           ans = max(ans,prices[i]-minimum);
        }
    return ans;
    }
};
