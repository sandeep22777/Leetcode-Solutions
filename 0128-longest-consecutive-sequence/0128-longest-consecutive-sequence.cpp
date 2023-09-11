class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      
        if(nums.size() == 0) return 0;
            int longest = 1;
        // sort(nums.begin(),nums.end());
        unordered_set<int> s;
        for(auto i : nums) s.insert(i);
        
        
        for(auto it = s.begin();it != s.end();it++)
        {
            int count= 1;
            int temp = *it;
            if(s.find(temp-1) == s.end())
            {
                while(s.find(temp+1) != s.end())
                {
                    count++;
                    temp++;
                }
                longest = max(longest,count);
            }
                      
        }
        return longest;
    }
};