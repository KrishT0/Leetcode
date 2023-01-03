class Solution
{
public:
     bool isSameTree(TreeNode *p, TreeNode *q)
     {
          if (!p || !q)
               return q == p;
          return q->val == p->val && isSameTree(q->left, p->left) && isSameTree(q->right, p->right);
     }
};