class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s= 0;
        int e = nums.size()-1;
         int f,second=0;
        
        while(s<=e)
        {
            if(nums[s] + nums[e] > target)
            {
                e--;
            }
            else if (nums[s] + nums[e] < target)
            {
                s++;
            }
            else {
                f = s+1;
                second = e+1;
                break;
            }
        }
        
        return {f,second};
    }
};