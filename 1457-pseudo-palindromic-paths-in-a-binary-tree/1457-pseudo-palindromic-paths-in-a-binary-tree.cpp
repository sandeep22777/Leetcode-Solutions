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

        
   int ans=0;
    void countPaths(TreeNode* root, unordered_map<int,int>m){
        m[root->val]++;
        if(!root->left && !root->right){
            int count=0;
            for(auto it:m) {
                if(it.second%2!=0) count++;
            }
            if(count<=1) ans++;
            m[root->val]--;
            return ;
        }
        if(root->left) countPaths(root->left,m);
        if(root->right) countPaths(root->right,m);
        m[root->val]--;
    }
        
    int pseudoPalindromicPaths (TreeNode* root,int count = 0) {
        
          if (!root)
      return 0;
    count ^= 1 << root->val;
    int res = pseudoPalindromicPaths(root->left, count) + pseudoPalindromicPaths(root->right, count);
    if (!root->left && !root->right && (count & (count - 1)) == 0)
      res++;
    return res;
            
        //     if(root->left == NULL && root->right == NULL) return 1;
        //     vector<int> v;
        // palid(root,v);
        //     return count;
            
            
            
    }
};