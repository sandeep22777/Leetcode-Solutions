class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size()) return "";
        int temp = t.size();
        unordered_map<char,int> m;
        for(auto i : t) m[i]++;
        int j=0;
        int high =INT_MAX;
        int first, second =0;
        
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]> 0)
            {
                temp--;
             
            }
               m[s[i]]--;
            
            while(temp ==0)
            {
                if(i-j+1 < high)
                {
                    high = min(high,i-j+1);
                    first = j;
                }
                m[s[j]]++;
                if(m[s[j]] > 0)
                {
                    temp++;                               
                }
                 j++;
                cout<< j << endl;
            }
        }
        if(high != INT_MAX) return s.substr(first,high);
        else return "";
       
    }
};