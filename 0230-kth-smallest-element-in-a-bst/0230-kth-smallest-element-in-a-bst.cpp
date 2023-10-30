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
    int result = 0;
    void small(TreeNode* root, int k , int &ans)
    {
        if(root == NULL) return;
        small(root->left, k, ans);
        ans++;
         if( k == ans){
             result = root->val;
        }
        small(root->right, k, ans);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int ans = 0;
        small(root, k, ans);
        return result;
    }
};