class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0;
        int j=0;
        long cur= 1;
         if(k<= 1) return 0;
        for(int i=0;i<nums.size();i++)
        {
            cur *= nums[i];
           
             while(cur >=k)
            {
                cur = cur/nums[j];
                j++;
            }
            
            ans += i-j+1;
        }
        return ans;
    }
};