class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int result = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i] -k) != m.end() || m.find(nums[i] +k) != m.end())
            {
                if(m[nums[i] - k] > 0) result += m[nums[i]-k]; 
                if(m[nums[i] + k] > 0) result += m[nums[i]+k]; 
            }
           m[nums[i]]++;
        }
        return result;
    }
};