class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int  n = cost.size();
         vector<int> dp(n,-1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        int result = INT_MAX;
        if(n == 2) return min (cost[0], cost[1]);
        for(int i=2;i<n;i++)
        {
            if(i+1 == cost.size())
            {
                 dp[i] =min( dp[i-2]  + cost[i], dp[i-1]);
                result = dp[i];
                break;
            }
            dp[i] =min( dp[i-2] , dp[i-1]) + cost[i];           
        }
        return result;
    }
};