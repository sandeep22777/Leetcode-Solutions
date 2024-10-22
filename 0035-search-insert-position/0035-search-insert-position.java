class Solution {
    public int searchInsert(int[] nums, int target) {
        int s =0;
        int e = nums.length-1;
        if(target < nums[0]) return 0;
        if(target > nums[e]) return e+1;
        
        int ans = -1;
        
        while(s<=e)
        {
            int mid = s + (e-s)/2;
            if(nums[mid] >= target) {
                ans  = mid;
                e = mid-1;
            }
            else s = mid+1;
        }
        
        return ans;
    }
}