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
    
//      TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root ==  NULL) return NULL;
//          if(root->val < p->val && root->val < q->val)
//          {
//              LCA(root->right,p,q);
//          }
//          else if(root->val > p->val && root->val > q->val)
//          {
//              LCA(root->left,p,q);
//          }
//          else {
//               return root;
//          }
        
//      }
     TreeNode* lcs(TreeNode* root, TreeNode* p, TreeNode* q)
        {
               if(!root) return NULL;
                if(root->val > p->val && root->val > q->val)
                {
                      return  lcs(root->left,p,q);
                }
                else if(root->val < p->val && root->val < q->val)
                {
                      return  lcs(root->right,p,q);
                }
                else
                {
                        return root;
                }
        }
         
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       // if(root->left->val == p->val && root->right->val == q->val ) return root;
        
        return lcs(root,p,q);
    }
};