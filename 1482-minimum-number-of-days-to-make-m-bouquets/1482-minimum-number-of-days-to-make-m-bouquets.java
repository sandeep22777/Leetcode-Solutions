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
    
    public static int helper(int[] b , int mid,int k)
    {
        int temp = 0;
        int count = 0;
        for(int i=0;i<b.length;i++)
        {
            if(b[i] <= mid )
            {                
                temp++;
                if(temp == k){
                    count++;
                    temp = 0;
                }
            }
            else {
                temp = 0;
            }
        }
        
        return count;
    }
    
    public int minDays(int[] b, int m, int k) {
        int s = 1;
        int e = max(b);
        
        if(m*k > b.length) return -1;
        int ans = -1;
        
        while(s<=e)
        {
            int mid = s + (e-s)/2;
            int h = helper(b,mid,k);
            System.out.println(h);
            if(h >= m){
                ans = mid;
                e= mid-1;
            }
            else s = mid+1;
        }
        return ans;
    }
}