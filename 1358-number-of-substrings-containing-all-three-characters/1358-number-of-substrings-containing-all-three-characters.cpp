class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans= 0;
        unordered_map<char,int> m;
        int j=0;
        int len = s.size();
        for(int i=0;i<len;i++)
        {
            m[s[i]]++;
            while(m.size() == 3)
            {
                ans += len-i;
                m[s[j]]--;
                if(m[s[j]] == 0)
                {
                    m.erase(s[j]);
                }                
                j++;
            }
           
        }
        return ans;
    }
};