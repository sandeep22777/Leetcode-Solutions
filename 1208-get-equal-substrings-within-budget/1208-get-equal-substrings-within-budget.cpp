class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int ans = 0;
        int sum =0;
        int j=0;
        
        for(int i=0;i<s.size();i++)
        {
            sum += abs(s[i] - t[i]);
            while(sum > maxCost)
            {
                sum -= abs(s[j]-t[j]);
                j++;
            }
                ans = max(ans,i-j+1);
            
        }
        return ans;
    }
};