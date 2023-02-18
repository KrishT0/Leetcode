class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int i = digits.size() - 1;

        while (i >= 0)
        {
            if (digits[i] < 9) // check for carry
            {
                digits[i] += 1;
                return digits;
            }
            else
                digits[i--] = 0;
        }
        digits.insert(digits.begin(), 1); // here 1 is inserted at begining
        return digits;
    }
};