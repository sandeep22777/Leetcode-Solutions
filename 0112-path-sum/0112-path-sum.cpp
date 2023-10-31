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
    bool helper(TreeNode* root, int targetSum)
    {
        if(root->left == NULL && root->right == NULL ) {
            if(targetSum-root->val == 0)
            {
                return true;
            }
            return false;
        }
        
        bool l ,r;
        if(root->left)
        {
            l = helper(root->left,targetSum-root->val);
        }
        if(root->right)
        {
            
         r = helper(root->right, targetSum-root->val);
        }
         return l || r;
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL ) return false;
        return helper(root,targetSum);
    }
};