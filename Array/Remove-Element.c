int removeElement(int A[], int n, int elem)
{
    int i = 0;
    while (i < n)
    {
        if (A[i] == elem)
        {
            A[i] = A[n - 1];
            n--;
        }
        else
            i++;
    }
    return n;
}