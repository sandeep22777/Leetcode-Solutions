class Solution {
public:
    int balancedString(string s) {
        int how  = s.size()/4;
        
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int ans= s.size();
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]--;  
            while(j< s.size() &&  m['Q'] <= how && m['R'] <= how && m['W'] <= how && m['E'] <= how)
            {
                ans= min(ans, i-j+1);
                m[s[j++]]++;
            }
        }
        return ans;
        
    }
};