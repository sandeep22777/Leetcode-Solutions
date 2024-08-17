class Solution {
public:
    
    int rec(vector<int>& nums, int t, int low,int high)
    {
        int mid = (low+ high)/2;
        if(low>high) return -1;
        if(nums[mid] == t)
        {
            return mid;
        }
        else if(nums[mid]< t)
        {
           return  rec(nums,t,mid+1,high);
        }
        else {
           return rec(nums,t,low,mid-1);
        }
    }
    
    int search(vector<int>& nums, int target) {
      return rec(nums,target,0,nums.size()-1);
    }
};