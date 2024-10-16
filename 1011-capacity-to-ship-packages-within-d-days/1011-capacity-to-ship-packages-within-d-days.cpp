class Solution {
public:
    
    int sum (vector<int> arr)
{
    int s = 0;
    for(auto i  : arr) s+= i;
    return s;
}

int max (vector<int> arr)
{
    int s = 0;
    for(auto i  : arr) {
        if(i> s) s = i;
    };
    return s;
}
    
    
    int shipWithinDays(vector<int>& w, int d) {
         long long s = max(w);
    long long e = sum(w);

    long long ans = INT_MAX;

    while(s<=e)
    {
        long long mid = s + (e-s)/2;
        long long temp = 0;
        long long count =0;

        for(int i=0;i<w.size();i++)
        {
            if(temp + w[i]<= mid)
            {
                temp+= w[i];
            }
            else {
               count++;
                temp= w[i];
            }
        }
        if(temp<=mid) count++;
        if(count<=d){
            ans = min(ans,mid);
            e = mid-1;
        }
        else s = mid+1;
    }
    return ans;
    }
};