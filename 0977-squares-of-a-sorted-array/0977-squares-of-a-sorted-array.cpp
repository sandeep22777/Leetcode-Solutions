class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int size = nums.size();
       vector<int> ans(size);
        
        int s = 0;
        int e = size-1;
        int r = e;
        
        
         while(s<=e)
         {
             if(nums[s] * nums[s] >= nums[e] * nums[e])
             {
                 ans[r] = nums[s]* nums[s];
                 s++;
                 r--;
             }
             else {
                 ans[r] = nums[e] * nums[e];
                 r--;
                 e--;
             }
         }
      
        return ans;
        
        
    }
};