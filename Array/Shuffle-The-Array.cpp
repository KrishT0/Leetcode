class Solution
{
public:
     vector<int> shuffle(vector<int> &nums, int n)
     {
          vector<int> ans;
          int i, j;
          i = 0;
          j = n;
          while (j < (2 * n))
          {
               ans.emplace_back(nums[i]);
               i++;
               ans.emplace_back(nums[j]);
               j++;
          }

          return ans;
     }
};