class Solution
{
public:
     vector<vector<int>> levelOrder(TreeNode *root) // BFS
     {
          vector<vector<int>> ans;
          if (root == NULL)
               return ans;

          queue<TreeNode *> q;
          q.emplace(root);

          while (!q.empty())
          {
               vector<int> level;
               int size = q.size();
               for (int i = 0; i < size; i++)
               {
                    TreeNode *node = q.front();
                    q.pop();

                    if (node->left)
                         q.emplace(node->left);
                    if (node->right)
                         q.emplace(node->right);

                    level.emplace_back(node->val);
               }
               ans.emplace_back(level);
          }
          return ans;
     }
};