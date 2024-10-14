class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans=0;
        int n = nums.size();
        if(n == 1) return 0;
       if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;
        int s = 1;
        int e = n-2;
        
        while(s<=e)
        {
            int m = s + (e-s)/2;
            if(nums[m] > nums[m-1] && nums[m] > nums[m+1])
            {
                ans = m;
                break;
            }
            
            if(nums[m] > nums[m-1])
            {
                s = m+1;
            }
            else {
                e = m-1;
            }
        }
        return ans;
    }
};