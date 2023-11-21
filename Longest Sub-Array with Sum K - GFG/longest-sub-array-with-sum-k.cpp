//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int,int> m;
        int result =0;
        if(N ==1){
            if(A[0] == K)
            {
                return K;
            }
        }
        
        int pre = 0;
        
        for(int i= 0;i<N;i++)
        {
            pre += A[i];
            if(pre-K == 0) {
                result = max(result,i+1);
            }
            if(m.find(pre - K) != m.end())
            {
                result = max(result,i-m[pre-K]);
            }
           if(m.find(pre) == m.end()) m[pre] = i;
        }
        return result;
    } 
    
    
//     17 15
// -13 0 6 15 16 2 15 -12 17 -16 0 -3 19 -3 2 -9 -6

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends