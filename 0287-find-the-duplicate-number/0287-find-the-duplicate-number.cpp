class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
             int temp = abs(nums[i]);
            if(nums[temp]<0){
                ans = temp;
                break;
            } 
            else {
               
                nums[temp] *= -1;
            }
        }
        return ans;
    }
};