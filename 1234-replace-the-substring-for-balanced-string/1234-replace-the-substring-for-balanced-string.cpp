class Solution {
public:
    int balancedString(string s) {
        int ans =INT_MAX;
        unordered_map<char,int> m;
        for(auto i : s) m[i]++;
        int len = s.size()/4;
        int j=0;
        
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]--;
            while(j < s.size() &&  m['Q'] <= len  && m['W'] <= len  && m['E'] <= len && m['R'] <= len)
            {
                ans = min(ans,i-j+1);
                m[s[j]]++;
                j++;
            }
        }
        
        return ans;
    }
};