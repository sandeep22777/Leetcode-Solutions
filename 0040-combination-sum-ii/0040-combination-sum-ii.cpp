class Solution {
public:
   void helper(int ind, vector<int>& can, int target, vector<int>& temp, vector<vector<int>> &ans)
{
    
        if(target == 0)
        {
            ans.push_back(temp);
            return;
        }
         
           
       for(int i=ind;i<can.size();i++)
       {
           if(i> ind && can[i]  == can[i-1]) continue;
                      if(can[i] > target) break;
           temp.push_back(can[i]);
           helper(i+1,can,target-can[i],temp,ans);
           temp.pop_back();
       }   
    
}


vector<vector<int>> combinationSum2(vector<int>& can, int target) {
    sort(can.begin(), can.end());
    vector<int> temp;
     vector<vector<int>> ans;
    helper(0,can,target, temp, ans);
    return ans;
}
};