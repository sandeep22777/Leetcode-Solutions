class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        char ans = letters[0];
        int s = 0;
        int e = letters.length-1;
        
        if(letters[e] < target) return ans;
        if(target < letters[0]) return ans;
        
        
        while(s<=e)
        {
            int mid = s+ (e-s)/2;
            if(letters[mid] > target)
            {
                ans = letters[mid];
                e = mid-1;
            }
            else s = mid+1;
        }
        
        return ans;
        
    }
}