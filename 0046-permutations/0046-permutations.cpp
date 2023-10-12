class Solution {
public:
    
     void per( vector<int>nums,  vector<int> &temp,  vector<int> &hash, vector<vector<int>> &ans )
     {
         
         if(temp.size() == nums.size())
         {
             ans.push_back(temp);
             return;
         }
         
         for(int i=0;i<nums.size();i++)
         {
             if(!hash[i])
             {
                 temp.push_back(nums[i]);
                 hash[i] = 1;
                 per(nums,temp,hash,ans);
                 temp.pop_back();
                  hash[i] = 0;
             }
             
         }
     }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> hash(nums.size(), 0);
        per(nums,temp,hash,ans);
        return ans;
    }
};