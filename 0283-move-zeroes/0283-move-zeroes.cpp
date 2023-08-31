class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x= 0;
        int i=0;
        int j=nums.size()-1;
       while(i<=j)
       {
           if(nums[i] !=  0)
           {
               swap(nums[i],nums[x]);
               x++;
           }
           i++;
       }
    }
};