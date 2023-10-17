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
    // int Depth(TreeNode* root)
    // { 
    //     if(!root) return 0;
    //     if(root->left == NULL && root->right == NULL )return 1;  
    //     return max(Depth(root->left), Depth(root->right)) +1;
    // }
    
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        if(root->left == NULL && root->right == NULL )return 1; 
        int la = minDepth(root->left);
        int ra = minDepth(root->right);
        int ans =  min(la,ra) +1;
        return ans == 1 ? max(la,ra) +1 : ans;
    }
};