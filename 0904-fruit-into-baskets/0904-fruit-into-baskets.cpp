class Solution {
public:
    int totalFruit(vector<int>& f) {
        
       unordered_map<int,int> m;
        
        int i=0;
        int left = 0;
        int ans = INT_MIN;
        
        for( i=0;i<f.size();i++)
        {
            m[f[i]]++;
            while(m.size() >2)
            {
                if(--m[f[left]] == 0) m.erase(f[left]);
                left++;
            }
            ans = max(ans,i-left+1);
        }
        
        return ans;
    }
};