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
        int direction = 1;
        
        while(left<=right && top <=down)
        {
            if(direction == 1)
            {
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                direction =2;
                top++;
            }
           else if(direction == 2)
            {
                for(int i=top;i<=down;i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                direction =3;
                right--;
            }
           else if(direction == 3)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[down][i]);
                }
                direction =4;
                down--;
            }
            else if(direction == 4)
            {
                for(int i=down;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                direction =1;
                left++;
            }
        }
        
        

        return ans;
    }
};