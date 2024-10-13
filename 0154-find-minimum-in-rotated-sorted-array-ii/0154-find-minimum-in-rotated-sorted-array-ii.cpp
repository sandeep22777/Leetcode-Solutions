class Solution {
public:
    int findMin(vector<int>& nums) {
         int  s =0;
        int e = nums.size()-1;
        int ans =INT_MAX;
        if(nums.size() ==1 ) return nums[0];
        
        while(s<=e)
        {
            int mid  = s + (e-s)/2;
            if(nums[s] == nums[mid] && nums[mid]== nums[e] )
            {
                ans = min(ans,nums[s]);
                s++;
                e--;
                continue;
            }
            if(nums[s] <= nums[mid])
            {
                ans = min(ans,nums[s]);
                s = mid+1;
            }
            else {
                ans = min(ans,nums[mid]);
                e = mid-1;
            }
        }
        
        return ans;
    }
};