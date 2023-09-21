class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j= 0;
        unordered_map<int,int> m;
        int curfre = 0;
        int result = 0;
        
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
            curfre = max(curfre,m[s[i]]);
            
            if(i-j+1 - curfre > k )
            {
                m[s[j]]--;
                j++;
            }
            result = max(result,i-j+1);
        }
        
        return result;
    }
};