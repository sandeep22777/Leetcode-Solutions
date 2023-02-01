class Solution {
public:
     void per(vector<vector<int>> &ans,vector<int> &v,vector<int> &nums,vector<int> &m)
        {
                if(v.size() == nums.size())
                {
                        ans.push_back(v);
                        return;
                }
               
                for(int i=0;i<nums.size();i++)
                {
                        if(!m[i])
                        {
                                v.push_back(nums[i]);
                                m[i]=1;
                                per(ans,v,nums,m);
                                m[i]=0;
                                v.pop_back();
                        
                        }
                
                }
                
                
                
                
        }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
            vector<int> v;
            vector<int> m(nums.size(),0);
            per(ans,v,nums,m);
            return ans;
    }
};