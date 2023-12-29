int verificaPerfeito(int num)
{
    char retorno;
    int i;
    int j;
    int soma=0;

    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            soma = soma + i;
        }
    }
    if(num==soma)
    {
        retorno = 's';
    }
    else
    {
        retorno = 'n';
    }
    return(retorno);
}
