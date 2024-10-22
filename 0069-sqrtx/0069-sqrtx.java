class Solution {
    public int mySqrt(int x) {
        int s = 0; // start should be 0
    int e = x;
    int ans = 0;

    if (x == 0) return 0;  // base case for x = 0
    
    while (s <= e) {
        int mid = s + (e - s) / 2;
        long midSquared = (long)mid * mid; // to avoid overflow

        if (midSquared <= x) {
            ans = mid;  // mid is a possible answer
            s = mid + 1;  // search in the right half
        } else {
            e = mid - 1;  // search in the left half
        }
    }

    return ans;
    }
}