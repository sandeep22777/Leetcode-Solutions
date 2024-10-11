class Solution {
public:
    
    int Range(vector<int>& nums, int target, bool isFirstIndex)
    {
            int ans  = -1;
            int s = 0;
            int e = nums.size()-1;
        
            while(s<=e)
            {
                int mid = s + (e-s)/2;
                if(nums[mid] < target)
                {
                    s = mid+1;
                }
                else if(nums[mid] > target)
                {
                    e = mid-1;
                }
                else {
                    ans = mid;
                    if(isFirstIndex)
                    {
                        s = mid+1;
                    }
                    else {
                        e = mid-1;
                    }
                }
            }
        return ans;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        ans[0] = Range(nums,target,false);
        
        if(ans[0] != -1)
        {
             ans[1] = Range(nums,target,true);
        }
        return ans;
    }
};