class Solution {
public:
    int min (vector<int> arr)
{
	int c = 1;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i] < c) c= arr[i];
	}
	return c;

}
int max (vector<int> arr)
{
	int c = 1;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i] > c) c= arr[i];
	}
	return c;

}

int possible(vector<int> arr, int day, int k, int m)
{
	int count = 0;
	int ans =0;
	for(int i=0;i<arr.size();i++)
	{
		if(day>= arr[i]) count++;
		else {
			ans += count/k;
			count =0;
		}
	}
	ans += count/k;
	return ans;
}

    
    int minDays(vector<int>& arr, int m, int k) {
        long long s = min(arr);
	long long e = max(arr);

	long long ans = -1;

	while(s<=e)
	{
		long long mid = s + (e-s)/2;

		int output = possible( arr, mid, k,  m);
		// cout<<output<<endl;
		if(output >= m)
		{
			ans =mid;
			e = mid-1; 
		}
		else s = mid+1;

	}

	return ans;

    }
};