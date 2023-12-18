//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int ans = -1;
    unordered_map<char,int>m;
    int run = 0;
    
    int i=0,j=0;
    while(j<s.size())
    {
        m[s[j]]++;
        if(m.size() < k)
        {
            j++;
        }
        else if(m.size() == k)
        {
            ans = max(ans,j-i+1);
            j++;
        }
        else {
            while(m.size()>k)
            {
                m[s[i]]--;
                if(m[s[i]] == 0)
                {
                    m.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends