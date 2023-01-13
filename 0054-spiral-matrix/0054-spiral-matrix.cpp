class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      
         vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        
        int left = 0;
        int down = row-1;
        int right = col-1;
        int top = 0;
        
        
        int dir =1;
        
        while(left<=right && top <=down)
        {
            if(dir ==1)
            {
                for(int i= left;i<=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top++;
                dir = 2;
            }
            
            
            else if(dir ==2)
            {
                for(int i= top;i<=down;i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                 right--;
                dir = 3;
            }
            
            
          else   if(dir ==3)
            {
                for(int i= right;i>=left;i--)
                {
                    ans.push_back(matrix[down][i]);
                }
                 down--;
                dir = 4;
            }
          
            
            
           else  if(dir ==4)
            {
                for(int i= down;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                 left++;
                dir = 1;
            }
               
        }
        return ans;
    }
};