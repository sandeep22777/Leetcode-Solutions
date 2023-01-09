class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        if(nums.size() == 0) return 0;
        
        for(int i : nums) s.insert(i);
        
        int ans = 1;
        
        for(int i=0;i<nums.size();i++)
        {
            int temp= 1;
            if(s.find(nums[i] -1) == s.end() )
            {
                int j =1;
                while(s.find(nums[i] +j) != s.end())
                {
                    temp++;
                    j++;
                }
                ans = max(temp,ans);
                               
            }
        }
        
        return ans;
            
    }
};