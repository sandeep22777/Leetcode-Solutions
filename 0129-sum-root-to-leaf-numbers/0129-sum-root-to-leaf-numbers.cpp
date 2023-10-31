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
    void helper(TreeNode* root, int temp)
    {
       
        if(root->left == NULL && root->right == NULL)
        {
            temp = temp*10  +  root->val;
            result += temp;
            return;
        }
        if(root->left)
        {
            temp = temp*10  +  root->val;
        helper(root->left,temp);
        temp = temp/10;
        }
        if(root->right)
        {
             temp = temp*10  +  root->val;        
        helper(root->right, temp);
         temp = temp/10;
        }

    }
    
    int sumNumbers(TreeNode* root) {
        if(root == NULL) return 0;
        int temp =0;
        helper(root,temp);
        return result;
    }
};