class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int size = nums.size();
       vector<int> ans(size,0);
        
        int s = 0;
        int e = size-1;
        int r = e;
        
        while(s<=e)
        {
            if(abs(nums[s]) < abs(nums[e]))
            {
                int temp = abs(nums[e]);
                int an =temp*temp;
                ans[r] = an;
                e--;
                r--;
               
            }
            else
            {
                int temp = abs(nums[s]);
                int an =temp*temp;
                ans[r] = an;
                s++;
                r--;
            }
        }
        return ans;
        
        
    }
};