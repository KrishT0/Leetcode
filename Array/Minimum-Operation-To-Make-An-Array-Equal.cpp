class Solution
{
public:
     int minOperations(int n)
     {
          int mid = n / 2;
          if (n % 2 == 0)
               return mid * mid;
          else
               return mid * (mid + 1);
     }
};