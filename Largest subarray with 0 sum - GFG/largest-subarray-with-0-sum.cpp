//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int sum = 0;
    int longest_length = 0;
    unordered_map<int, int> mpp;
    mpp[0] = -1;
    //when there is no array we assume sum is 0 at index -1 hypothetically
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];
 
            if (mpp.find(sum) != mpp.end())
            {
                longest_length = max(longest_length, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
 
    }
        
        return longest_length;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends