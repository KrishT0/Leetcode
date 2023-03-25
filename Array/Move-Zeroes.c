 // brute force
void moveZeroes(int *nums, int n)
{

    if (n == 0 || n == 1)
        return;
    int i, j;
    i = j = 0;
    for (int k = 0; k < n; k++)
    {
        if (nums[i] == 0)
        {
            i++;
        }
        else
        {
            if (i != j)
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
            i++;
            j++;
        }
    }
}

// snowball algo
void moveZeroes(int *nums, int n)
{
    int snowBallSize = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            snowBallSize++;
        }
        else if (snowBallSize > 0)
        {
            int t = nums[i];
            nums[i] = 0;
            nums[i - snowBallSize] = t;
        }
    }
}
