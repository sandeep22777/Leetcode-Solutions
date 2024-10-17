class Solution {
    public int findKthPositive(int[] vec, int k) {
              if(k < vec[0]) return k;
        int n = vec.length;
    int  s = 0;
    int  e = n-1;

    int  ans = 0;

    while(s<=e)
    {
        int  mid = s + (e-s)/2;
        if(vec[mid]- (mid+1) < k)
        {
            s = mid+1;
        }
        else e= mid-1;
    }
    int  diff = vec[e] - (e+1);
    return k-diff+vec[e];
    }
}