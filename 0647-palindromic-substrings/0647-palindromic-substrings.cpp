class Solution {
public:
    int countSubstrings(string s) {
        int dp[1000][1000] = {{0}};
        int n = s.size();
        int first = 0;
        int ans = 0;
         while(first < n)
         {
             dp[first][first] = 1;
             ans++;
             first++;
         }
        first = 0;
         while(first < n-1)
         {
             if(s[first]  == s[first+1])
             {
                  dp[first][first+1] = 1;
                ans++;
             }
            
             first++;
         }
        
        int length = 3;
        while(length<=n)
        {
             int i =0;
           
            while(i< n-length+1)
            {
                 int j = i+length-1;
                if(s[i] == s[j] && dp[i+1][j-1] == 1)
                {
                    dp[i][j] = 1;
                    ans++;
                }
                i++;
            }
            length++;
        }
        
        return ans;
        
    }
};