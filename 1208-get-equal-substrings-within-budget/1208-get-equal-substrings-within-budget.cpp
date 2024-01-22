class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int len = s.size();
        if(len != t.size()) return 0;
        
        int cur= 0;
        int ans = INT_MIN;
        int j=0;
        
        vector<int> v(len,0);
        for(int i=0;i<len;i++)
        {
            v[i] = abs(s[i] - t[i]);
        }
        
        for(int i=0;i<len;i++)
        {
            cur += v[i];
            
            while(cur > maxCost)
            {
                cur -= v[j];
                j++;
            }
            ans = max(ans, i-j+1);
        }
        
        return ans;
    }
};