class Solution
{
public:
     vector<vector<int>> verticalTraversal(TreeNode *root)
     {
          map<int, map<int, multiset<int>>> m;       // vertical, level, value
          queue<pair<TreeNode *, pair<int, int>>> q; // value, vertical, level

          q.push({root, {0, 0}});
          while (!q.empty())
          {
               auto p = q.front();
               q.pop();

               TreeNode *node = p.first;
               int x = p.second.first;  // vertical
               int y = p.second.second; // level

               m[x][y].emplace(node->val); // inserting value into multiset

               if (node->left)
                    q.push({node->left, {x - 1, y + 1}});
               if (node->right)
                    q.push({node->right, {x + 1, y + 1}});
          }
          vector<vector<int>> ans;
          for (auto it1 : m)
          {
               vector<int> arr;
               for (auto it2 : it1.second)
                    arr.insert(arr.end(), it2.second.begin(), it2.second.end());
               ans.emplace_back(arr);
          }
          return ans;
     }
};