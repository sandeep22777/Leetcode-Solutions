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
    
    bool sym(TreeNode* l , TreeNode* r)
    {
         if(l == NULL && r == NULL) 
        {
            return true;
        }
        if(l == NULL && r != NULL) 
        {
            return false;
        }
         if(l != NULL && r == NULL) 
        {
            return false;
        }
        if(l->val != r->val) return false;
        
        bool ll =  sym(l->left,r->right);
        bool rr =  sym(l->right,r->left);
        
        return ll && rr;
        
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root) return false;
        return sym(root->left,root->right);
    }
};