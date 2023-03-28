class Solution
{
public:
    int guessNumber(int n)
    {
        int right = n, left = 1;
        while (true)
        {
            int mid = (right - left) / 2 + left;
            int res = guess(mid);
            if (res == 0)
            {
                return mid;
            }
            else if (res == 1)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
};