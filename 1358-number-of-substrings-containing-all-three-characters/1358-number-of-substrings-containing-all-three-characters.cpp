class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans= 0;
        unordered_map<char,int> m;
        int j=0;
        int len = s.size();
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            while( m['a'] >= 1 && m['b'] >= 1 && m['c'] >= 1 )
            {
                ans += len-i;
                m[s[j]]--;
                j++;
            }
        }
        return ans;
    }
};