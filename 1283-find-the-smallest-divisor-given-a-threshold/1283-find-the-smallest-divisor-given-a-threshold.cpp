class Solution {
public:
    
    int helper(vector<int>& arr, int mid)
{
	int ans=0;
	for(int i=0;i<arr.size();i++)
	{
		ans += ceil(double(arr[i])/mid);
	}
	return ans;
}


    
    
    int smallestDivisor(vector<int>& arr, int limit) {
        	long long s = 1.0;
	long long e = *max_element(arr.begin(),arr.end());
	// cout<<e<<"high"<<endl;
	long long ans = INT_MAX;

	while(s<=e)
	{
		long long mid = s + (e-s)/2;
		int result  = helper(arr, mid);
		
		if(result <=limit)
		{
			ans = min(ans,mid);
			e = mid-1;
		}
		else s = mid+1;
	}
	
	return ans;
    }
};