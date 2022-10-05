class Solution {
public:
    int reverse(int x) {
       /* 
        int s=0;
        int f = 0;
        if(x<0)
        {
            f=1;
            x = x-x-x;
        }
        while(x>0)
        {
            if(s>INT_MAX/10 || s<INT_MIN/10 )
            {
                return 0;
            }
            int r = x%10;
            s = s*10 + r;
            x = x/10;
            
        }
        if(f==1)
        {
            return -s;
        }
        else
        {
            return s;
        }
        
        */
        
      bool neg = false;
        long reversedNumber = 0, num = x;
        int remainder;
        if(num<0) {                  // Convert negative number to positive number
            neg = true;
            num = (long)x*(-1);
        }
        while(num != 0) {            // Reverse the integer
            remainder = num%10;
            reversedNumber = reversedNumber*10 + remainder;
            num /= 10;
        }
        if(neg == true)              // If neg is true, convert back to negative
            reversedNumber = reversedNumber*(-1);
        if(reversedNumber < INT_MIN || reversedNumber > INT_MAX)  // If overflow, return 0
            return 0;
        return (int)reversedNumber;  // else return reversed integer  
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};