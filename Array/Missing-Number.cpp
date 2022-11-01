class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        n = n * (n + 1) * 0.5 - accumulate(nums.begin(), nums.end(), 0);
        return n;
    }
}; // bruteforce aaproach