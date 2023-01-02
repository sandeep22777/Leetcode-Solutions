class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;
        
        for(int i=1;i<=numRows;i++)
        {
            vector<int> v(i,1);
            
            if(i>2)
            {
                for(int j=1;j<v.size()-1;j++)
                {
                    v[j] = ans[i-2][j-1] + ans[i-2][j];
                }
            }
            ans.push_back(v);
        }
        
        return ans;
        
    }
};