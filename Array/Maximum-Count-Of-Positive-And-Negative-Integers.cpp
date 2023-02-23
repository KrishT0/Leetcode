class Solution
{
public:
     int maximumCount(vector<int> &nums)
     {
          int positive = 0, negative = 0;
          for (int i = 0; i < nums.size(); i++)
          {
               if (nums[i] > 0)
                    positive++;
               else if (nums[i] < 0)
                    negative++;
          }
          return max(positive, negative);
     }
};