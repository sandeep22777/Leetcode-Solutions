class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int result = 0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m.find(nums[i] -k) != m.end() || m.find(nums[i] +k) != m.end())
            {
                 result += m[nums[i]-k]; 
                result += m[nums[i]+k]; 
            }           
        }
        return result;
    }
};