class Solution {
    
    public static int lower(int[] arr, int x)
    {
        	int n = arr.length;
						int ans = -1;
						int s =0;
						int e = n-1;
				
						while(s<=e)
						{
							int mid = s + (e-s)/2;
                            if(arr[mid] == x)
                            {
                                ans = mid;
                                e = mid-1;
                            }
							else if(arr[mid] > x)
							{
								e = mid-1;
							}
							else {
								s = mid+1;
							}
						}
						return ans;	
    }
    
    public static int upper(int[] arr, int x)
    {
        	int n = arr.length;
						int ans = -1;
						int s =0;
						int e = n-1;
				
						while(s<=e)
						{
							int mid = s + (e-s)/2;
                            if(arr[mid] == x)
                            {
                                ans = mid;
                                s = mid+1;
                            }
							else if(arr[mid] < x)
							{
								
                                s = mid+1;
							}
							else {
								e = mid-1;
							}
						}
						return ans;	
    }
    
    
    
    public int[] searchRange(int[] nums, int target) {
        int []ans = new int[2];
        ans[0] = -1;
        ans[1] = -1;
        
        int s = 0;
        int e = nums.length-1;
        int l = lower(nums,target);
        int r = upper(nums,target);
        if(l != -1) ans[0] = l;
        if(r != -1) ans[1] = r;
        
        return ans;
    }
}