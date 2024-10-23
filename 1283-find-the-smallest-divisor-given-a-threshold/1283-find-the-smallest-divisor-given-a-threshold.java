class Solution {
     public static int max(int[] b)
    {
        int m = 0;
        for(int i=0;i<b.length;i++)
        {
            if(b[i]>m) m = b[i];
        }
        return m;
    }
    
     public static int helper(int[] b , int mid)
    {
        int temp = 0;
        int count = 0;
        for(int i=0;i<b.length;i++)
        {
            if(b[i] < mid) count ++;
            else if(b[i] == mid) count += b[i]/mid;
            else count += (b[i] + mid -1)/mid; 
        }
        
        return count;
    }
    
    public int smallestDivisor(int[] b, int m) {
         int s = 1;
        int e = max(b);
        
        int ans = Integer.MAX_VALUE;
        
        while(s<=e)
        {
            int mid = s + (e-s)/2;
            int h = helper(b,mid);
            System.out.println(h);
            if(h <= m){
                ans = Math.min(ans, mid);
                e = mid-1;
            }
            else  s = mid+1;
        }
        return ans;
    }
}