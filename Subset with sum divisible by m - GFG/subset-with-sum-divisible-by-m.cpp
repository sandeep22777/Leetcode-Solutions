//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	 int sub(vector<int> &nums,int i,int ans,int count,int m)
    {
        if(i == nums.size())
        {
            
            if((ans % m) == 0 && ans != 0 )
            {
                return 1;
            }
            else {
                return 0;
            }
        }
        
        ans  += nums[i];
   int l =  sub(nums,i+1,ans,count,m);
        ans -= nums[i];
     int r =   sub(nums,i+1,ans,count,m);
    return l+r;
    
        
    }
    


		int DivisibleByM(vector<int>nums, int m){
		    // Code here
		    int ans =0;
		    int count =0;
       return sub(nums,0,ans,count,m) > 0 ? 1 : 0;
        
        
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans  = ob.DivisibleByM(nums, m);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends