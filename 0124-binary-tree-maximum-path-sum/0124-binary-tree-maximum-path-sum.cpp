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
   
      int result = INT_MIN;
    int helper(TreeNode* root)
    {
        if(root == NULL) return 0;
      //  if(root->left == NULL && root->right == NULL) return root->val;
        
        int l  = helper(root->left);
        int r = helper(root->right);
        
        if(l< 0) l = 0;
        if(r<0) r = 0;
        result  = max(result , l + r + root->val);
        return max(l,r) +root->val ;
    }
    int maxPathSum(TreeNode* root) {
       
        if(root->left == NULL && root->right == NULL) return root->val;
        if(root == NULL) return 0;
      helper(root);
        return result;
    }
};