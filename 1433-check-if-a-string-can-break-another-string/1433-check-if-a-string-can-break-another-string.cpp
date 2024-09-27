class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        if(s1.size() != s2.size()) return false;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        int ans = 0;
        
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i] >= s2[i])
            {
                continue;
            }
            else {
                 ans++;
                break;
            }
        }
        
         for(int i=0;i<s1.size();i++)
        {
           if(s2[i] >= s1[i])
            {
                continue;
            }
            else {
                 ans++;
                break;
            }
        }
        
        return ans > 1 ? false : true;
    }
};