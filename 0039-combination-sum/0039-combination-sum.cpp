class Solution {
public:
    
    void subset(int i , vector<vector<int>> &ans,vector<int>& temp, int target, vector<int>& can )
    {
        if(target == 0 || i == can.size() || target < 0)
        {
            if(target ==0 )
            {
                ans.push_back(temp);
            }
           return;
        }
        
        
        if(can[i] <= target)
        {
            temp.push_back(can[i]);
            subset(i,ans, temp,target-can[i],can);
            temp.pop_back();
        }
        
        subset(i+1,ans,temp,target,can);
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
         vector<vector<int>> ans;
        vector<int> temp;
        subset(0, ans,temp,target,can);
        return ans;
            
    }
};