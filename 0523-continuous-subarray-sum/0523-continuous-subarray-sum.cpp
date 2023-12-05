class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
         int mod = 0;
        int sum = 0;
        for(int i =0;i<nums.size();i++)
        {
            sum += nums[i];
            mod = sum%k;
            if(mod == 0 && i >=1) return true;
            if(m.find(mod) != m.end())
            {
                if(i-m[mod]>= 2)
                {
                    return true;
                }
            }
            if(m.find(mod) == m.end()) m[mod] = i;            
        }
        return false;
    }
};