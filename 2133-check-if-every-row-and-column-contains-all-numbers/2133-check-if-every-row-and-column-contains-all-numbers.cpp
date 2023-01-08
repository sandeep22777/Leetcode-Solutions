class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        set<int> s;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(s.find(matrix[i][j]) != s.end()) return false;
                else s.insert(matrix[i][j]);
            }
            s.clear();
        }
        
        s.clear();
        
        
         for(int i=0;i<matrix[0].size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(s.find(matrix[j][i]) != s.end()) return false;
                else s.insert(matrix[j][i]);
            }
             s.clear();
        }
        
            return true;
    }
};