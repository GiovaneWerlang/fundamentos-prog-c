void mostraMultiplos(int num1, int num2)
{
    int j;
    int qtdeM=0;

    for(j=1;qtdeM<num1;j++)
        {
            if(j%num2==0)
            {
                printf("%d\t",j);
                qtdeM++;
            }
        }
    }

void mostraMultiploIntervado(int num1, int num2, int limite1, int limite2)
{
    int i;

    for(i=limite1;i<=limite2;i++)
    {
        if(i%num1==0&&i%num2==0)
        {
            printf("%d\t",i);
        }
    }
}
