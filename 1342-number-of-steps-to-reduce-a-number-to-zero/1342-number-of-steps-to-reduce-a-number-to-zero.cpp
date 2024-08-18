class Solution {
public:
    
    int steps(int n,int ans)
    {
        if(n == 0) return ans;
        
        if(n%2 == 0)
        {
            ans++;
           return steps(n/2,ans);
        }
        else {
            ans++;
               return steps(n-1,ans);
            }
    }
    
    
    int numberOfSteps(int num) {
        return steps(num,0);
    }
};