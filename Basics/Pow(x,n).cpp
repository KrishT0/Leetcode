class Solution
{
public:
    double myPow(double x, int n)
    {
        long nn = n;
        double ans = 1;

        if (nn < 0)
            nn = -1 * nn;

        while (nn > 0)
        {
            if (nn % 2 == 1)
            {
                ans = ans * x;
                nn = nn - 1;
            }
            else
            {
                x = x * x;
                nn = nn / 2;
            }
        }
        if (n < 0)
        {
            ans = 1 / ans;
        }

        return ans;
    }
};