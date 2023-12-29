void transformaPositivo(int num)
{
    num = num * -1;
    printf("%d\n",num);
}

int verificaPrimo(int num)
{
    int i;
    int qtde=0;

    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            qtde++;
            if(qtde==1)
            {
                i=num;
            }
        }
    }
    return(qtde);
}

void tabuada(int num)
{
    int i;

    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",i,num,i*num);
    }
}
