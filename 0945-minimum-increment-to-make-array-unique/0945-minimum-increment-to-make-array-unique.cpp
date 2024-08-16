class Solution {
public:
    int minIncrementForUnique(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int size = arr.size()-1;
        long long ans =0; 
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i] <= arr[i-1])
            {
                ans = ans + arr[i-1]+ 1 - arr[i];
                arr[i] = arr[i-1]+1;
                
            }
        }
        return ans;
    }
};