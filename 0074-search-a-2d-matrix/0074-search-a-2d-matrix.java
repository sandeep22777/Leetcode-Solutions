class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
        int low = 0;
       
        int m = matrix[0].length;
         int high = matrix.length * m-1;
        // System.out.println(m);
        while(low<=high)
        {
            int mid = (low + (high))/2;
            System.out.println(mid + "mid");
            int rowNo = mid/m;
           
            int zrow = mid%m < 0 ? 0 : mid%m;
             System.out.println(zrow);
            int value = matrix[rowNo][zrow];
             System.out.println(value + "value");
            if(value == target)
            {
                return true;
            }
            else if(value < target) {
                low = mid+1;
                 System.out.println("YES");
            }
            else  {
                 System.out.println("NO");
            high = mid-1;
            }
        }
        return false;
    }
}