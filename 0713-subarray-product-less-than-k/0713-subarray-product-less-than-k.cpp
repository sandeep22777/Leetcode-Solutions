class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans= 0;
        long sum =1;
        int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if (k <= 1) return 0;

            sum *= nums[j];
            while(sum >= k)
            {
                sum /= nums[i];
                i++;
            }
            ans += j-i+1;
        }
        return ans;
    }
};