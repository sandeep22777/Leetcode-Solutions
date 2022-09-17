class Solution {
public:
    int getMaxLen(vector<int>& arr) {
        
     int firstneg = -1,firstzero = -1,negcount =0,ans = 0;
            int  n = arr.size();
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] < 0)
        {
            negcount++;
            if(firstneg == -1)
            {
                firstneg = i;
            }
        }
        
        if(arr[i]== 0)
        {
            firstneg = -1;
            firstzero  =i;
            negcount = 0;
        }
        else
        {
            if(negcount %2 == 0)
            {
                ans = max(ans,i-firstzero);
            }
            else
            {
                ans = max(ans,i-firstneg);
            }
        }
    }
    return ans;
            
    }
};