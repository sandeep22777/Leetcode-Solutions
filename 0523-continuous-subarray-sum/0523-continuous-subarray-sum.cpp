class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
     unordered_map<int,int> m;
        int cur =0;
        m[0] = 1;
        
        for(int i=0;i<nums.size();i++)
        {
            cur += nums[i];
            if(i >=1 &&cur%k == 0) return true;
           if(m.find(cur%k) != m.end())
           {
               if(i-m[cur%k] >=2) return true;
           }
           if(m.find(cur%k) == m.end()) m[cur%k] = i;
        }
        return false;
    }
};

// [23,25,29,35,42]