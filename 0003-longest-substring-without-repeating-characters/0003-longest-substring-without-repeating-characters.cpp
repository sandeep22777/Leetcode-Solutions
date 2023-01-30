class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
    int i=0,j=0,ans = 0;
        set<char> m;
        
        while(i<s.size())
        {
         
            while(m.count(s[i]))
            {
                m.erase(s[j]);
                j++;
            }
            m.insert(s[i]);
            ans = max(ans,i-j+1);
            i++;
        }
        
        
        
        return ans;
    }
};