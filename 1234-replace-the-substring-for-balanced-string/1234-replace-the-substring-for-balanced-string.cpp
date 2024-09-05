class Solution {
public:
    int balancedString(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int ans =INT_MAX;
        int n  = s.size()/4;
        int j=0;
        if (m['Q'] == n && m['W'] == n && m['E'] == n && m['R'] == n) {
        return 0;
    }
        for(int i=0;i<s.size();i++)
        {
           m[s[i]]--;
            
            while(  m['Q'] <= n && m['R'] <= n && m['E'] <= n && m['W'] <= n )
            {
                ans = min(ans,i-j+1);
                m[s[j]]++;
                j++;
            }
        }
        return ans == INT_MAX ? 0 : ans;
     
        
//         for(int i=0;i<s.size();i++)
//         {
//            if( m[s[i]] >= n ) {
             
//             ans += m[s[i]] -n;  
//                  m[s[i]] = 0;
//            }
//         }
//         return ans;
        
    }
};
// n- 5

// w - 8
// e - 4
// q - 5
// r - 3    

// n - 2
    
// w - 3
// e - 0
// q - 4
// r - 1    
    
    