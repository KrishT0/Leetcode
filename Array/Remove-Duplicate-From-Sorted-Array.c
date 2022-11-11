int removeDuplicates(int *a, int n)
{
    if (n == 1)
        return 1;

    int left = 0;
    int right = 1;

    while (right < n)
    {
        if (a[left] == a[right])
            right++;
        else
        {
            a[left + 1] = a[right];
            left++;
            right++;
        }
    }
    return left + 1;
}