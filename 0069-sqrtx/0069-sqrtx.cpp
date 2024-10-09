class Solution {
public:
    int mySqrt(int x) {
        if(x ==0 ) return 0;
        if(x < 4) return 1;
        long long s = 0;
        long long e  = x;
        
        while(s <=e)
        {
            long long mid = s+ (e-s)/2;
            if(mid == x/mid) return mid;
            else if( mid* mid < x) s = mid+1;
                else e = mid-1;
        }
        return s-1;
    }
};