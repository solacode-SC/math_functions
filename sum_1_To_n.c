int sum(int n)
{
    int res = 0;
    int i = 0;
    while (i <= n)
    {
        res += i;
        i++;
    }
    return (res);
}