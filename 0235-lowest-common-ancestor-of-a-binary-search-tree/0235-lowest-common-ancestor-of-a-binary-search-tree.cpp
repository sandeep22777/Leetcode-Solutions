/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
     TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode* q) {
         if(root == NULL) return NULL;
         if(root == p || root == q) return root;
         
         TreeNode* l = LCA(root->left,p,q);
        TreeNode* r = LCA(root->right, p ,q);
         
         if(l != NULL && r != NULL) return root;
         
         return l == NULL ? r : l;
     }
         
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       // if(root->left->val == p->val && root->right->val == q->val ) return root;
        
        return LCA(root,p,q);
    }
};