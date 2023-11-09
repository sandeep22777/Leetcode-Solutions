class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  = prices.size();
        if(n ==1 ) return 0;
        int result = 0 ;
        int min = prices[0];
        for(int i= 1;i<n;i++)
        {
            if(prices[i] < min )
            {
                min  = prices[i];
                continue;
            }
            result = max(prices[i] - min,result);
            
        }
        return result;
        
    }
};