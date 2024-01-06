class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        vector<int> a(26,0);
        for(auto c: s1) a[c-'a']++;
        vector<int> b(26,0);
        
        int i=0;
        int j=0;
        while(j<s2.size())
        {
            b[s2[j] -'a']++;
            
            if(j-i+1 == s1.size())
            {
                if(a == b) return true;   
            }
            if(j-i+1 < s1.size())
            {
                j++;
            }
            else {
                b[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};