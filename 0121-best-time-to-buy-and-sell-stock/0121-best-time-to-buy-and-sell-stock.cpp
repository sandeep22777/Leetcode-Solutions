class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  = prices.size();
        if(n ==1 ) return 0;
        int result = 0 ;
        int min = prices[0];
        vector<int> dp(n,-1);
        dp[0] =  0;
        
        for(int i= 1;i<n;i++)
        {
            if(prices[i] < min )
            {
                min  = prices[i];
                // result =  0;
                dp[i] = 0;
                continue;
            }
            result = max(prices[i] - min,result);
            dp[i]  = result;
            
        }
        return result;
        
    }
};