/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
         void path(TreeNode*&root,int sum,int t,vector<vector<int>> &v,vector<int> temp)
    {
            if(!root) return ;
            if(root->left == NULL && root->right == NULL)
            {
                    sum += root->val;
                     if(sum == t) 
                     {temp.push_back(root->val);
                            v.push_back(temp);
                      
                     }
                    return;
                   
            }
            
            
            sum += root->val;
                 temp.push_back(root->val);
                 
            path(root->left,sum,t,v,temp);
           path(root->right,sum,t,v,temp);
            
           // return l || r;
    }
        
        
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
            vector<vector<int>> v;
             if(!root) return v;
            vector<int> temp;
        path(root,0,targetSum,v,temp);
            return v;
        
    }
};