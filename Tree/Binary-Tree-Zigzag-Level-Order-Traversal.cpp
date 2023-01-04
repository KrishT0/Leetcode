class Solution
{
public:
     vector<vector<int>> zigzagLevelOrder(TreeNode *root)
     {
          vector<vector<int>> ans;
          if (root == NULL)
               return ans;
          bool leftToRight = true;
          queue<TreeNode *> q;
          q.emplace(root);
          while (!q.empty())
          {
               int size = q.size();
               vector<int> row(size);
               for (int i = 0; i < size; i++)
               {
                    TreeNode *node = q.front();
                    q.pop();
                    int index;
                    if (leftToRight) // for changing traversal path
                         index = i;
                    else
                         index = size - 1 - i;

                    row[index] = node->val;

                    if (node->left)
                         q.emplace(node->left);
                    if (node->right)
                         q.emplace(node->right);
               }
               if (leftToRight)
                    leftToRight = false;
               else
                    leftToRight = true;
               ans.emplace_back(row);
          }
          return ans;
     }
};