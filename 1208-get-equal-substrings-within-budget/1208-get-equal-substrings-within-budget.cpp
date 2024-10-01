class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        // if(maxCost == 0) return 1;
        if(s.size() != t.size()) return 0;
        
        int sum = 0;
        int ans= INT_MIN;
        int j=0;
        
        for(int i=0;i<s.size();i++)
        {
                sum += abs(s[i]-t[i]);
                while(sum>maxCost)
                {
                    ans = max(ans,i-j);
                    sum -= abs(s[j]-t[j]);
                    j++;
                    
                }
                ans = max(ans,i-j+1);
        }
        return ans == INT_MIN ? 1 : ans;
    }
};