class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int s = 0;
        int l = nums.size()-1;
        int mid = 0;
        
        while(mid<=l)
        {
            if(nums[mid] == 0)
            {
                swap(nums[mid++],nums[s++]);
                
            }
            else if(nums[mid] == 1)
            {
               
              mid++;
            }
            else
            {
                 swap(nums[mid],nums[l--]);
                
            }
           
        }
        
    }
};