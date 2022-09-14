class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
            if(nums.size() == 0) return 0;
          
            unordered_set<int> s;
            for(int i=0;i<nums.size();i++)
            {
                    s.insert(nums[i]);
            }

            int ans = 0;
        int  c=0;
            for(int i=0;i<nums.size();i++)
            {
                    c=0;
                    
                    if(s.find(nums[i] -1) == s.end() )
                    {
                             c++;     
                            int j=1;
                            while((s.find(nums[i] +j) != s.end()) == true)
                            {
                                    j++;
                                    c++;
                            }
                          
                    }                    
                ans = max(ans,c);    
                    
            }
            
           return ans; 
    }
};