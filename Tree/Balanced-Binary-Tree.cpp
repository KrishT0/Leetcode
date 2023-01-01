class Solution
{
private:
     int height(TreeNode *root)
     {
          if (root == NULL)
               return 0;

          int l = height(root->left);
          if (l == -1)
               return -1;
          int r = height(root->right);
          if (r == -1)
               return -1;

          if (abs(l - r) > 1)
               return -1;

          return 1 + max(l, r);
     }

public:
     bool isBalanced(TreeNode *root)
     {
          return height(root) != -1;
     }
};

// brute-force
class Solution
{
public:
     int height(TreeNode *root)
     {
          if (root == NULL)
               return 0;
          int l = height(root->left), r = height(root->right);
          return 1 + max(l, r);
     }

     bool isBalanced(TreeNode *root)
     {
          if (root == NULL)
               return true;

          int l = height(root->left);
          int r = height(root->right);

          if (abs(l - r) > 1)
               return false;

          bool left = isBalanced(root->left);
          bool right = isBalanced(root->right);

          if (!left || !right)
               return false;
          return true;
     }
};