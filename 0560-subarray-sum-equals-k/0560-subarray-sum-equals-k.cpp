class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int count =0;
        int cur=0;
        int start =0;
        m[0] =1;
        
        for(int i=0;i<nums.size();i++)
        {
            cur += nums[i];
           if(m.find(cur-k) != m.end())
           {
               count += m[cur-k];
           }
            m[cur]++;
        }
        return count;
    }
};