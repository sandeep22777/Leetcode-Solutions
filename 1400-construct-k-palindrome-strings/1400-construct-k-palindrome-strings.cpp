class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k) return false;
        unordered_map<char,int> m;
        int odd =0;
        
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        
        for(auto i :m)
        {
            if(i.second&1) odd++;
        }
        
        return odd<=k;
    }
};