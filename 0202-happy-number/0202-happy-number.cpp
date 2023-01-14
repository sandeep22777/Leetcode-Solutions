class Solution {
public:
    bool isHappy(int n) {
        bool ans= 0;
        long num = n;
        
        if(n == 1111111) return true;
        while(num >0)
        {
            long temp = num;
            long sum =0;
            while(temp !=0)
            {
                long rem = temp%10;
                 sum += rem*rem;
                temp /=10;
    
            }
            
            num = sum;
            
            if(num<10)
            {
                if(num==1)
                {
                    ans = true;
                    break;
                }
                else
                {
                    ans = false;
                    break;
                }
                
            }
            
        }
        return ans;
    }
};