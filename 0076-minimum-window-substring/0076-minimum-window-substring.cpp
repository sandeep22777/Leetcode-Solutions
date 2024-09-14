class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m;
        int high = INT_MAX;
        int start =0;
        
        for(auto i : t) m[i]++;
        int len = t.size();
        int count = len;
        int j = 0;
        
        for(int i=0;i<s.size();i++)
        {
            
            if(m[s[i]] > 0)
            {
                count--;
            }
            m[s[i]]--;
            while(count == 0)
            {
                if(i-j < high)
                {
                    high = i-j+1;
                    start = j;
                }
                m[s[j]]++;
                if(m[s[j]] > 0)
                {
                    count++;
                }
                j++;
            }
                        
        }
        if(high == INT_MAX) return "";
        else return s.substr(start,high);
    }
};