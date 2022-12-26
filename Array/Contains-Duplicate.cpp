class Solution
{
public:
     bool containsDuplicate(vector<int> &nums)
     {
          set<int> k;
          for (int i = 0; i < nums.size(); i++)
          {
               int val = nums[i];
               k.emplace(val);
          }
          if (k.size() == nums.size())
               return false;
          else
               return true;
     }
};