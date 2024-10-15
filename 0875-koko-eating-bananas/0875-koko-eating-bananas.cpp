class Solution {
public:
    int minEatingSpeed(vector<int>& v, int h) {
         int s = 1;
    int e = *max_element(v.begin(),v.end());
    long long ans= INT_MAX;

    while(s<=e)
    {
        long long mid = s + (e-s)/2;
        long long temp =0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i] % mid == 0) {
                temp = temp +  v[i]/mid;
            }
            else if(v[i] < mid ){
                temp++;
            }
            else {
                temp = temp +  v[i]/mid;
                temp++;
            }
        }
        if(temp>h)
        {
            s= mid+1;
        }
        else {
            ans = min(ans,mid);
             e= mid-1;            
        }
    }
    return ans;
    }
};