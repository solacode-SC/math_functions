int produit(int n)
{
    int res = 1;
    int i = 1;
    while (i <= n)
    {
        res *= i;
        i++;
    }
    return (res);
}