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
    
    bool help(TreeNode* root, long low, long high)
    {
        if(root == NULL) return true;
        if(root->val <= low || root->val >= high) return false;
        
        // if(root->val >= high && root->val <= low)
        // {
        //     return false;
        // }
        
        
        bool l = help(root->left,low,root->val);
        bool r = help(root->right, root->val, high);
        
        return l && r;
    }
    
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
                
        return help(root,LONG_MIN, LONG_MAX);
            
        
        
    }
};