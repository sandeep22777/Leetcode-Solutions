class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
            int ans=INT_MAX;          
            int i=0;
                   int j=0;
            int  pre =0;
            while(j<nums.size())
            {
                    pre += nums[j];
                    if(pre<target )
                    {
                            j++;
                    }
                    else
                    {
                            while(pre-nums[i]>= target)
                            {
                                    pre-=nums[i++];
                            }
                            ans = min(ans,j-i+1);
                            j++;
                    }
            }
            if(ans==INT_MAX)
        {
            return 0;
        }
            return ans;
            
            
            
    }
};