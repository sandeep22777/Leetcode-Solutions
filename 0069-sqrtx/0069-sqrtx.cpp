class Solution {
public:
    int mySqrt(int n) {
//         if(x ==0 ) return 0;
//         if(x < 4) return 1;
//         long long s = 0;
//         long long e  = x;
        
//         while(s <=e)
//         {
//             long long mid = s+ (e-s)/2;
//             if(mid == x/mid) return mid;
//             else if( mid* mid < x) s = mid+1;
//                 else e = mid-1;
//         }
//         return s-1;
        if(n ==0) return 0;
         long long s = 1;
    long long e = n;
    int ans = 1;

    while(s<=e)
    {
        long long m = s + (e-s)/2;
        // if(m*m == n) return m;

        if(m*m > n)
        {
            e = m-1;
        }
        else {
            ans = m;
            s= m+1;
        }
    }
    return ans;
    }
};