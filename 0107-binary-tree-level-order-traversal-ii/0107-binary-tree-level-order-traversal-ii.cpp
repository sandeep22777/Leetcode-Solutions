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
      int height(TreeNode* root){
        if(root == NULL) return 0;
        
        return max(height(root->left),height(root->right)) + 1;
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int n  = height(root);
          vector<vector<int>> ans(n);
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        
      
        
        while(!q.empty())
        {
            int size = q.size();
            vector<int> v;
            for(int i=0;i<size;i++)
            {
                TreeNode* temp = q.front();
                v.push_back(temp->val);
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
                q.pop();
            }
            ans[n-1] = v;
            n--;
            // ans.insert(ans.begin(), v);
            
        }
        return ans;
    }
};