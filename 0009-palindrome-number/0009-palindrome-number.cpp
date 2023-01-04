class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        int original = x;
        
        long sum =0,t=0;
        while(x!= 0)
        {
             t = x%10;
            sum = sum*10 + t;
            x/=10;
        }
        
        return (original == sum);
    }
};