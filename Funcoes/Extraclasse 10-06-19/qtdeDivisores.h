int qtdeDivisores(int num)
{
    int i,j, qtde = 2;

    if(num==1)
    {
        qtde=1;
    }
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            qtde++;
        }
    }

    return(qtde);
}
