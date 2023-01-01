class Solution
{
public:
     int maxPathSum(TreeNode *root)
     {
          int hue = INT_MIN;
          findMax(root, hue);
          return hue;
     }

     int findMax(TreeNode *root, int &hue)
     {
          if (root == NULL)
               return 0;

          int l = max(0, findMax(root->left, hue));
          int r = max(0, findMax(root->right, hue));

          hue = max(hue, l + r + root->val);
          return root->val + max(l, r);
     }
};