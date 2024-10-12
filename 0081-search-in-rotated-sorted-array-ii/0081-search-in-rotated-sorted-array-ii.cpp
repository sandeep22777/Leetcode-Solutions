class Solution {
public:
    bool search(vector<int>& arr, int k) {
         bool ans = false;
    int s = 0;
    int e = arr.size()-1;

    while(s<= e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid] == k)
        {
            return true;
        }
        
        if(arr[s] == arr[mid] && arr[mid] == arr[e])
        {
            s++;
            e--;
            continue;
        }
         if (arr[s] <= arr[mid])
        {
            if(arr[s] <= k && k  <= arr[mid])
            {
                e= mid-1;
            }
            else {
                s = mid+1;
            }
        }
        else {
             if(arr[mid] <= k && k <= arr[e])
            {
                
                s = mid+1;
            }
            else {
                e= mid-1;
            }
        }
    }
    return ans;
    }
};