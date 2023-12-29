int calculafatorial (int num)
{
    int i, fat=1;

    for(i=num;i>=2;i--)
    {
        fat = fat * i;
    }
    return(fat);
}

void mostrafatorial (int num)
{
    int i, j;

    for(i=1;i<=num;i++)
    {
        printf("%d! => ",i);

        for(j=i;j>=2;j--)
        {
            printf("%d * ",j);
        }
        printf("1 = %d\n",calculafatorial(i));
    }
}
