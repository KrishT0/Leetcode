class Solution
{
private:
     int diameter = 0;

public:
     int diameterOfBinaryTree(TreeNode *root)
     {
          dfs(root);
          return diameter;
     }

     int dfs(TreeNode *root)
     {
          if (!root)
               return 0;
          int left = dfs(root->left), right = dfs(root->right);
          diameter = max(diameter, left + right);
          return max(left, right) + 1;
     }
};