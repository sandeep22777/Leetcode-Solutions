class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k > s.size()) return false;
        unordered_map<char,int> m;
        for(auto i : s) m[i]++;
        
        int ans =0;
        for(auto it = m.begin();it!= m.end();it++)
        {
            if(it->second % 2 != 0) ans++;
        }
        
        return ans <= k ? true : false;
    }
};