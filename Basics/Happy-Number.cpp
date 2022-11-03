class Solution
{
public:
    bool isHappy(int n)
    {
        set<int> result;
        int val, index;

        while (1)
        {
            val = 0;
            while (n)
            {
                index = n % 10;
                val += index * index;
                n /= 10;
            }
            if (val == 1)
                return true;
            else if (result.find(val) != result.end())  //to check if value present in set or not.
                return false;

            result.insert(val);
            n = val;
        }
        return false;
    }
};