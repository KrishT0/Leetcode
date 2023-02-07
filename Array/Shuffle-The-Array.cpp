class Solution
{
public:
     vector<int> shuffle(vector<int> &nums, int n)
     {
          vector<int> ans;
          int i, j, count;
          i = 0;
          j = n;
          count = 1;
          while (i <= n && j < (2 * n))
          {
               if (count % 2 != 0)
               {
                    ans.emplace_back(nums[i]);
                    i++;
                    count++;
               }
               else
               {
                    ans.emplace_back(nums[j]);
                    j++;
                    count++;
               }
          }

          return ans;
     }
};