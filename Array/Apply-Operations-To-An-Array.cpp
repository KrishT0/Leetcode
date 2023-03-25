class Solution
{
public:
     void snowball(vector<int> &nums)
     {
          int snowBallSize = 0;
          for (int i = 0; i < nums.size(); i++)
          {
               if (nums[i] == 0)
                    snowBallSize++;
               else if (snowBallSize > 0)
               {
                    int t = nums[i];
                    nums[i] = 0;
                    nums[i - snowBallSize] = t;
               }
          }
     }

     vector<int> applyOperations(vector<int> &nums)
     {
          for (int i = 0; i < nums.size() - 1; i++)
          {
               if (nums[i] == nums[i + 1])
               {
                    nums[i] = 2 * nums[i];
                    nums[i + 1] = 0;
                    i++;
               }
          }
          snowball(nums);
          return nums;
     }
};