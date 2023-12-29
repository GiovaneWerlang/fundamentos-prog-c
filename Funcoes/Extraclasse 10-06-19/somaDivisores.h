int somaDivisores(int num)
{
    int i, soma=1;

    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            soma = soma + i;
        }
    }
    return(soma);
}
