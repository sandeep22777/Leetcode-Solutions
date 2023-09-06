class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int size = nums.size();
       vector<int> ans(size);
        
        int s = 0;
        int e = size-1;
        int r = e;
        
        
       for(int k = r;k>=0;k--)
       {
           if(abs(nums[s]) >= abs(nums[e]) ) ans[k] = nums[s]* nums[s++];
           else ans[k] = nums[e]*nums[e--];
       }
      
        return ans;
        
        
    }
};