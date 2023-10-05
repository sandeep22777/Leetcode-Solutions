//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void helper(int i,vector<int> arr, int N, int ans, vector<int> &temp)
    {
        if(i == N)
        {
           temp.push_back(ans);
            return;
        }
        ans += arr[i];
        helper(i+1,arr,N,ans,temp);
        ans -= arr[i];
        helper(i+1,arr,N, ans,temp);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int ans = 0;
        vector<int> temp;
        helper(0,arr,N,ans,temp);
        return temp;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends