class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int next = 0;
        for(int i =0;i<s.size();i++)
        {
            char current = s[i];
            int ind = next;
            int j;
            for( j= ind;j<t.size();j++)
            {
                if(current == t[j])
                {
                    next = j+1;
                    break;
                }
            }
            if(j == t.size() && i != s.size() ) return false;
        }
        
        return true;
        
        
    }
};