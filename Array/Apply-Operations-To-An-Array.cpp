// leetcode
//space complexity : O(n)
//time complexity : O(n)



// not working in leetcode but working in vs code
//space complexity : O(1)
//time complexity : O(n)
#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
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
     for (int i = 0; i < nums.size(); i++)
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

int main()
{
     vector<int> a1 = {1, 2, 2, 1, 1, 0};
     applyOperations(a1);
     for (int i = 0; i < 6; i++)
     {
          cout << a1[i];
     }
     return 0;
}

