class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       
        if(nums.size() == 0) return 0;
        unordered_set<int> s;
        int ans=1;
        int lcs=1;
        
        for(int i : nums) s.insert(i);
        
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i] -1) == s.end() )
            {
                ans=1;
                int temp=1;
                while(s.find(nums[i] + temp) != s.end())
                      {
                          ans++;
                    temp++;
                      }
            }
            lcs = max(ans,lcs);
        }
        
        return lcs;
            
    }
};