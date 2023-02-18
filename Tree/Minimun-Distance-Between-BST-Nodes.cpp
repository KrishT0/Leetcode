class Solution
{
private:
     int ans = INT_MAX;
     TreeNode *prev = NULL;
     void inorder(TreeNode *root)
     {
          if (root == NULL)
               return;
          inorder(root->left);
          if (prev)
               ans = min(ans, (root->val - prev->val));
          prev = root;
          inorder(root->right);
     }

public:
     int minDiffInBST(TreeNode *root)
     {
          inorder(root);
          return ans;
     }
};