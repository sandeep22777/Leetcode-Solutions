class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int ans = INT_MAX;
        
        int total = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            total += nums[i];
            
            while(total>= target)
            {
                ans = min(ans,i-l+1);
                total -= nums[l++];
            }
        }
        
        
        return ans==INT_MAX ? 0 : ans;
        
    }
};