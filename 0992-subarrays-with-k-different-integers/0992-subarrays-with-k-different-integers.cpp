class Solution {
public:
    
    int findatmostk(vector<int>nums,int k)
    {
        int i=0;
        int j =0;
        int ans =0;
        unordered_map<int,int>m;
        for(int j=0;j<nums.size();j++)
        {
            m[nums[j]]++;
            while(m.size() > k)
            {
                m[nums[i]]--;
                if(m[nums[i]] == 0) m.erase(nums[i]);
                i++;
            }
            
            ans += j-i+1;
        }
        
        return ans;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
      int atmostk = findatmostk(nums,k);
      int atmostk2 = findatmostk(nums,k-1);
        return atmostk - atmostk2;
        
    }
};