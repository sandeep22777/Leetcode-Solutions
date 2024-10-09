class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1)
        {
            if(nums[0] == target) return 0;
            else return -1;
        }
        int s = 0;
        int h = nums.size()-1;
        
        while(s<=h)
        {
            int mid = s + (h-s)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) s = mid+1;
            else h = mid-1;
        }
        
        return -1;
    }
};