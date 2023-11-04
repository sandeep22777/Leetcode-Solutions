class Solution {
public:
    int h(vector<int> &nums,int i,vector<int> & dp)
    {
        if(i<0) return 0;
        if(i == 0) return nums[i];
        if(dp[i] != -1) return dp[i];
      int l = nums[i] + h(nums,i-2,dp);
        int r = 0 + h(nums,i-1,dp);
       
        return dp[i] =  max(l,r);
        
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        // if(n ==1 ) return nums[0];
        // if(n == 2) return max(nums[0], nums[1]);
        // int result = INT_MIN;
        // vector<int> dp(n,-1);
        // dp[0] = nums[0];
        // dp[1] = nums[1];
        // for(int i=2;i<n;i++)
        // {
        //    dp[i] = dp[i-2] + nums[i];
        //     result = max(result,dp[i]);
        // }
        vector<int> dp(n+1,-1);
     return  h(nums,n-1,dp);
    }
};