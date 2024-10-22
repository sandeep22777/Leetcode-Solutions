class Solution {
    public int findMin(int[] nums) {
        if(nums.length == 1) return nums[0];
        if(nums[0] < nums[nums.length-1]) return nums[0];
        
        int s =0;
        int e = nums.length-1;
        int ans = Integer.MAX_VALUE;
        
        while(s<=e)
        {
            int mid = s + (e-s)/2;
            System.out.println(nums[mid]);
            if(nums[s] <= nums[mid])
            {
                ans = Math.min(ans,nums[s]);
                s= mid+1;
            }
            else {
                 ans = Math.min(ans,nums[mid]);
                e = mid-1;
            }
        }
        return ans;
    }
}