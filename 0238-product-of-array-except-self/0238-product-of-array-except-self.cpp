class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int size = nums.size();
      vector<int> result(size,1);
        vector<int> res(size,1);
        vector<int> ans;
        int sum =1;
        result[0]  = nums[0];
        res[size-1] = nums[size-1];
      for(int i=1;i<nums.size();i++)
      {
          result[i] = nums[i] *  result[i-1];
      }
        for(int i= size-2;i>=0;i--)
        {
            res[i] = nums[i] *  res[i+1];
        }
        
        for(int i=0;i<size;i++)
        {
            if(i==0)
            {
                ans.push_back(res[i+1]);
            }
            else if(i == size-1)
            {
                ans.push_back(result[i-1]);
            }
            else {
                ans.push_back(result[i-1] * res[i+1]);
            }
        }
        return ans;
        
    }
};