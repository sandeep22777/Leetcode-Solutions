class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
       int s= 0;
        int e = nums.size()-1;
        vector<int> ans(nums.size());
        int temp = e;
        
        while(s<=e)
        {
            if(abs(nums[s]) <= abs(nums[e]))
            {
                ans[temp--] = nums[e]* nums[e--];
            }
            else {
                ans[temp--] = nums[s] * nums[s++];
            }
        }
        
       
        return ans;
    }
};