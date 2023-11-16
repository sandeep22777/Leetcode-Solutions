class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int count = 0;
        
        int pre = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            pre += nums[i];
            if(pre == k) count++;
            count += m[pre-k];
            m[pre]++;
        }
        return count;
    }
};