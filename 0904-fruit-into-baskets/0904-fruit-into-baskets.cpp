class Solution {
public:
    int totalFruit(vector<int>& f) {
        
        int i=0,j=0;
        int ans = 0;
       unordered_map<int,int> s;
        
        while(i<f.size())
        {
            s[f[i]]++;
            while(s.size() >2)
            {
                if(s[f[j]] == 1)
                {
                    s.erase(f[j]);
                }
                else
                {
                    s[f[j]]--;
                }
                
                
                j++;
            }
            
            ans = max(ans,i-j+1);
            i++;
        }
        

      return ans;  
    }
};