class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int ts = t.size();
        vector<int> v(ts,0);
        
        for(int i=0;i<ts;i++)
        {
            v[i] = abs(s[i]-t[i]);
        }
        int ans =INT_MIN;
        int sum =0;
        int start =0;
        
        for(int i=0;i<ts;i++)
        {
            sum += v[i];
            
            while(sum>maxCost)
            {
                sum -= v[start++];                
            }
            ans = max(ans,i-start+1);
        }
        return ans;
    }
};