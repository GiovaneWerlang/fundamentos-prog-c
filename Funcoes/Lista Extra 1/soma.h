int somaPares(int num1, int num2)
{
    int soma=0;
    int i;

    for(i=num1;i<=num2;i++)
    {
        if(i%2==0)
        {
            soma = soma + i;
        }
    }

    return(soma);
}
