class Solution
{
public:
     int singleNonDuplicate(vector<int> &nums)
     {
          int l = 0;
          int r = nums.size() - 2;
          while (l <= r)
          {
               int mid = (l + r) / 2;
               if (nums[mid] == nums[mid ^ 1])
                    l = mid + 1;
               else
                    r = mid - 1;
          }
          return nums[l];
     }
};