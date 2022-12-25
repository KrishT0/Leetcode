class Solution
{
public:
     vector<int> preorderTraversal(TreeNode *root)
     {
          vector<int> ans;
          if (root == NULL)
               return ans;
          stack<TreeNode *> s;
          s.emplace(root);

          while (!s.empty())
          {
               TreeNode *node = s.top();
               s.pop();
               ans.emplace_back(node->val);
               if (node->right)
                    s.emplace(node->right);
               if (node->left)
                    s.emplace(node->left);
          }

          return ans;
     }
};