// using two stacks
class Solution
{
public:
     vector<int> postorderTraversal(TreeNode *root)
     {
          vector<int> ans;
          if (root == NULL)
               return ans;

          stack<TreeNode *> s1;
          stack<TreeNode *> s2;
          s1.emplace(root);

          while (!s1.empty())
          {
               TreeNode *n1 = s1.top();
               s2.emplace(n1);
               s1.pop();
               n1 = s2.top();

               if (n1->left)
                    s1.emplace(n1->left);
               if (n1->right)
                    s1.emplace(n1->right);
          }

          while (!s2.empty())
          {
               TreeNode *n = s2.top();
               ans.emplace_back(n->val);
               s2.pop();
          }

          return ans;
     }
};